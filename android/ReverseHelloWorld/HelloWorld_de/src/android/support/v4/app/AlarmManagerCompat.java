// 
// Decompiled by Procyon v0.5.30
// 

package android.support.v4.app;

import android.os.Build$VERSION;
import android.app.PendingIntent;
import android.app.AlarmManager;

public final class AlarmManagerCompat
{
    public static void setAlarmClock(final AlarmManager alarmManager, final long n, final PendingIntent pendingIntent, final PendingIntent pendingIntent2) {
        if (Build$VERSION.SDK_INT >= 21) {
            AlarmManagerCompatApi21.setAlarmClock(alarmManager, n, pendingIntent, pendingIntent2);
            return;
        }
        setExact(alarmManager, 0, n, pendingIntent2);
    }
    
    public static void setAndAllowWhileIdle(final AlarmManager alarmManager, final int n, final long n2, final PendingIntent pendingIntent) {
        if (Build$VERSION.SDK_INT >= 23) {
            AlarmManagerCompatApi23.setAndAllowWhileIdle(alarmManager, n, n2, pendingIntent);
            return;
        }
        alarmManager.set(n, n2, pendingIntent);
    }
    
    public static void setExact(final AlarmManager alarmManager, final int n, final long n2, final PendingIntent pendingIntent) {
        if (Build$VERSION.SDK_INT >= 19) {
            AlarmManagerCompatKitKat.setExact(alarmManager, n, n2, pendingIntent);
            return;
        }
        alarmManager.set(n, n2, pendingIntent);
    }
    
    public static void setExactAndAllowWhileIdle(final AlarmManager alarmManager, final int n, final long n2, final PendingIntent pendingIntent) {
        if (Build$VERSION.SDK_INT >= 23) {
            AlarmManagerCompatApi23.setExactAndAllowWhileIdle(alarmManager, n, n2, pendingIntent);
            return;
        }
        setExact(alarmManager, n, n2, pendingIntent);
    }
}
