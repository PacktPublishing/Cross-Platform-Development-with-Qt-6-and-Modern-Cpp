import QtQuick
import QtQuick.Particles

Rectangle {
    color: "black"
    width: 512
    height: 512
    ParticleSystem {
        id: particleSystem
        anchors.fill: parent
        Image {
            source: "qrc:///logo.png"
            anchors.centerIn: parent
        }

        ImageParticle {
            system: particleSystem
            source: "qrc:///star.png"
            colorVariation: 0.5
            color: "#00000000"
        }

        Emitter {
            id: emitter
            system: particleSystem
            enabled: true
            x: parent.width/2
            y: parent.height/2

            maximumEmitted: 8000
            emitRate: 6000
            size: 4
            endSize: 24
            sizeVariation: 4
            acceleration: AngleDirection {angleVariation: 360; magnitude: 360; }

        }
    }
}
