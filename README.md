# Multi-Channel Audio Recorder

At the Jazz History Database, we have a need to digitize many audio cassettes as quickly as possible.  Currently, we found that most audio recording software could only record from one input device at a time.  So, here is a simple tool to record from multiple devices at the same time.

It is written in Qt5 and is based on the Audio Recorder example.  All code is under its original license.


Mac Installation Instructions
-----------------------------
1. Install XCode from App Store and open it and agree to the terms and conditions.

2. Install homebrew: https://brew.sh
    
    `$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
    
3. Install qt through homebrew

    `$ brew install qt`
    
4. Install git: https://git-scm.com
    
5. Clone the respository

    `$ git clone https://github.com/aiudirog/Multi-Input-Audio-Recorder.git`
    
6. Compile audio recorder

    `$ cd Multi-Input-Audio-Recorder/`
    
    `$ qmake && make`
    
7. Move audio recorder to Applications folder

    `$ sudo mv audiorecorder.app "/Applications/JHDB Multi Input Audio Recorder.app"`
