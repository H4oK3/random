//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICDrawing, ICDrawingCommand, ICDrawingContour, ICDrawingResourceHandler, ICGLContext, TSDGLDataBuffer, TSDGLFrameBuffer;

@interface ICDrawingRenderer : NSObject
{
    ICDrawingCommand *_currentCommand;
    ICGLContext *_glContext;
    TSDGLFrameBuffer *_paintFramebuffer;
    TSDGLFrameBuffer *_paintFramebufferAccumulator;
    TSDGLFrameBuffer *_originalBackFramebuffer;
    _Bool _hasRenderedIntoPaintAccumulator;
    struct __GLsync *_finishRenderingFence;
    ICDrawingResourceHandler *_resourceHandler;
    double _segmentedDistanceToNextPoint;
    unsigned int _segmentedRandomSeed;
    int _backingWidth;
    int _backingHeight;
    struct CGRect _clipRect;
    ICDrawingContour *_penContour;
    _Bool _inDrawingMode;
    struct CGSize _drawingSize;
    struct CGSize _actualSize;
    double _fromCommandSpaceScale;
    struct CGRect _contentsBounds;
    TSDGLDataBuffer *_strokeBuffer;
    _Bool _cancelRendering;
    ICDrawing *_drawing;
    struct CGAffineTransform _transform;
}

- (void).cxx_destruct;
- (void)applyCommandSpaceClipRect:(struct CGRect)arg1;
@property(nonatomic) _Bool cancelRendering; // @synthesize cancelRendering=_cancelRendering;
- (void)clear;
- (_Bool)clearAndRenderCommands:(id)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2 renderedBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentsBoundsInCommandSpace;
- (void)dealloc;
@property(nonatomic) __weak ICDrawing *drawing; // @synthesize drawing=_drawing;
- (void)drawingBeganWithCommand:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded;
- (void)drawingRenderPoints:(const vector_d46ea067 *)arg1 fromIndex:(unsigned long long)arg2;
- (void)drawingVertexReplay:(const vector_d46ea067 *)arg1 fromIndex:(unsigned long long)arg2;
- (void)finishRendering;
- (void)finishRenderingNoTeardownForCommand:(id)arg1;
@property(readonly, nonatomic) ICGLContext *glContext; // @synthesize glContext=_glContext;
- (id)initWithDrawingPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (struct CGImage *)newCGImage;
- (struct CGImage *)newCGImageFromGL;
- (void)printPath;
- (void)printSVGFile;
- (void)releaseDrawingFramebuffers;
- (void)releaseStrokeBuffer;
- (void)renderCommand:(id)arg1 withTransform:(struct CGAffineTransform)arg2 onPaper:(_Bool)arg3 flipped:(_Bool)arg4;
- (_Bool)renderCommands:(id)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2 renderedBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)renderCommands:(id)arg1 isClipped:(_Bool)arg2 renderedBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)renderCommands:(id)arg1 renderedBlock:(CDUnknownBlockType)arg2;
- (double)renderEraserStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 command:(id)arg3 distanceToNextPoint:(double)arg4 randomSeed:(unsigned int *)arg5;
- (void)renderFullscreenQuadWithShader:(id)arg1 transform:(struct CGAffineTransform)arg2 flipped:(_Bool)arg3;
- (void)renderImage:(struct CGImage *)arg1;
- (void)renderImage:(struct CGImage *)arg1 clippedToCommandSpaceRect:(struct CGRect)arg2;
- (double)renderMarkerStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 starts:(_Bool)arg3 ends:(_Bool)arg4 command:(id)arg5 distanceToNextPoint:(double)arg6 randomSeed:(unsigned int *)arg7;
- (double)renderParticleStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 starts:(_Bool)arg3 ends:(_Bool)arg4 distanceToNextPoint:(double)arg5 randomSeed:(unsigned int *)arg6 alpha:(double)arg7 particleTexture:(unsigned int)arg8 spacing:(double)arg9 count:(unsigned int)arg10 size:(struct CGSize)arg11 rotateEachParticle:(_Bool)arg12;
- (double)renderPenStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 command:(id)arg3 distanceToNextPoint:(double)arg4 randomSeed:(unsigned int *)arg5;
- (double)renderPenStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 distanceToNextPoint:(double)arg3 randomSeed:(unsigned int *)arg4 alpha:(double)arg5;
- (double)renderPencilStrokeFrom:(__wrap_iter_6ff8c631)arg1 to:(__wrap_iter_6ff8c631)arg2 command:(id)arg3 distanceToNextPoint:(double)arg4 randomSeed:(unsigned int *)arg5;
- (double)renderStroke:(struct Contour *)arg1 starts:(_Bool)arg2 ends:(_Bool)arg3 command:(id)arg4 distanceToNextPoint:(double)arg5 randomSeed:(unsigned int *)arg6;
- (void)renderStrokeVertices:(struct StrokeVertex *)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 particleTexture:(unsigned int)arg4 shader:(id)arg5;
- (void)renderTexture:(unsigned int)arg1 flipped:(_Bool)arg2;
- (void)renderVerticies:(const vector_d46ea067 *)arg1 fromIndex:(unsigned long long)arg2;
- (void)renderWithTransform:(struct CGAffineTransform)arg1 onPaper:(_Bool)arg2;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void)setViewport;
- (void)setupDrawingFramebuffersIfNecessary;
- (void)setupOpenGL;
- (void)setupStrokeBufferIfNecessary;

@end
