// 
// Decompiled by Procyon v0.5.30
// 

package android.support.v4.os;

import android.os.Environment;
import java.io.File;
import android.support.annotation.RequiresApi;

@RequiresApi(19)
class EnvironmentCompatKitKat
{
    public static String getStorageState(final File file) {
        return Environment.getStorageState(file);
    }
}
