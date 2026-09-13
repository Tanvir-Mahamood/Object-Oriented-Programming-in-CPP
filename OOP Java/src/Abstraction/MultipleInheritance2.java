package Abstraction;

interface AudioPlayer {
    void playAudio();
}

interface VideoPlayer {
    void playVideo();
}

// One interface extending multiple interfaces
interface MultimediaPlayer extends AudioPlayer, VideoPlayer {
    void record();
}

// Class only needs to implement the final interface
class SmartTV implements MultimediaPlayer {
    public void playAudio() { System.out.println("Playing audio..."); }
    public void playVideo() { System.out.println("Playing video..."); }
    public void record()    { System.out.println("Recording show..."); }
}

public class MultipleInheritance2 {
    public static void main(String[] args) {
        SmartTV stv = new SmartTV();
        stv.playAudio();
        stv.playVideo();
        stv.record();
    }
}

