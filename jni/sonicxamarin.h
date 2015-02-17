/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _init
 * Signature: (II)J
 */
long initNativeNative(int, int);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _close
 * Signature: (J)V
 */
void closeNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _flush
 * Signature: (J)V
 */
void flushNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setSampleRate
 * Signature: (JI)V
 */
void setSampleRateNative(long, int);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getSampleRate
 * Signature: (J)I
 */
int getSampleRateNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setNumChannels
 * Signature: (JI)V
 */
void setNumChannelsNative(long, int);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getNumChannels
 * Signature: (J)I
 */
int getNumChannelsNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setPitch
 * Signature: (JF)V
 */
void setPitchNative(long, float);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getPitch
 * Signature: (J)F
 */
float getPitchNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setSpeed
 * Signature: (JF)V
 */
void setSpeedNative(long, float);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getSpeed
 * Signature: (J)F
 */
float getSpeedNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setRate
 * Signature: (JF)V
 */
void setRateNative(long, float);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getRate
 * Signature: (J)F
 */
float getRateNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setChordPitch
 * Signature: (JZ)V
 */
void setChordPitchNative(long, bool);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getChordPitch
 * Signature: (J)Z
 */
getChordPitchNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _putBytes
 * Signature: (J[BI)Z
 */
bool putBytesNative(long, char *, int);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _receiveBytes
 * Signature: (J[BI)I
 */
int receiveBytesNative(long, char *, int);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _availableBytes
 * Signature: (J)I
 */
int availableBytesNative(long);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _setVolume
 * Signature: (JF)V
 */
void setVolumeNative(long, float);

/*
 * Class:     org_vinuxproject_sonic_Sonic
 * Method:    _getVolume
 * Signature: (J)F
 */
float getVolumeNative(long);
