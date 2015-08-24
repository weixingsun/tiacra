package ti.acra;

import org.appcelerator.kroll.KrollExternalModule;

public class TiacraBootstrap implements KrollExternalModule {
    public void bootstrap() {
        this.nativeBootstrap();
    }

    private native void nativeBootstrap();
}