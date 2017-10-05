//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NotesListController.h"

#import "UISearchResultsUpdating.h"

@class NSArray, NSMutableArray, NSString, NoteCollectionObject, NoteContext, UISearchController;

@interface NotesSearchResultListController : NotesListController <UISearchResultsUpdating>
{
    _Bool _pendingSearchResults;
    NSString *_searchedString;
    NSArray *_searchResults;
    UISearchController *_searchController;
    NoteCollectionObject *_collection;
    void *_searchContext;
    NSArray *_searchedTokens;
    NSMutableArray *_tmpSearchResults;
    NoteContext *_noteContext;
}

+ (Class)tableViewClass;
- (void).cxx_destruct;
- (void)clearSearchState;
@property(retain, nonatomic) NoteCollectionObject *collection; // @synthesize collection=_collection;
- (void)dealloc;
- (void)fetchNextSearchResults;
- (id)indexPathForNote:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, getter=isPendingSearchResults) _Bool pendingSearchResults; // @synthesize pendingSearchResults=_pendingSearchResults;
@property(retain, nonatomic) NoteContext *noteContext; // @synthesize noteContext=_noteContext;
- (id)noteForIndexPath:(id)arg1;
- (void)notesAddedToIndex:(id)arg1;
- (unsigned long long)numberOfNotes;
- (void)pauseSearching;
- (void)processChangesForDeletedNotes:(id)arg1 updatedNotes:(id)arg2 movedNotes:(id)arg3;
- (void)reloadSearchResultsForCollectionChange;
- (void)reloadTable;
- (void)resumeSearching;
@property(nonatomic) void *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void)searchString:(id)arg1;
@property(retain, nonatomic) NSString *searchedString; // @synthesize searchedString=_searchedString;
@property(retain, nonatomic) NSArray *searchedTokens; // @synthesize searchedTokens=_searchedTokens;
@property(retain, nonatomic) NSMutableArray *tmpSearchResults; // @synthesize tmpSearchResults=_tmpSearchResults;
- (void)stopSearching;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tokenizeString:(id)arg1;
- (void)updateCell:(id)arg1 withNote:(id)arg2;
- (void)updateNoSearchResultsViewVisibility;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NotesSearchResultListControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

