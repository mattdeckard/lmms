#ifndef _MIDI_APPLE_CORE__H_
#define _MIDI_APPLE_CORE__H_

#include "lmmsconfig.h"

#ifdef LMMS_BUILD_APPLE

#include "MidiClient.h"
#include <CoreMIDI/MIDIServices.h>

class MidiAppleCore : public QObject, public MidiClient
{
	Q_OBJECT
public:
	MidiAppleCore();
	virtual ~MidiAppleCore();

	virtual void processOutEvent( const MidiEvent & _me,
						const MidiTime & _time,
						const MidiPort * _port );



private:// slots:
	//void updateDeviceList();


private:

signals:
	void readablePortsChanged();
	void writablePortsChanged();
};

#endif //LMMS_BUILD_APPLE

#endif //_MIDI_APPLE_CORE__H_
