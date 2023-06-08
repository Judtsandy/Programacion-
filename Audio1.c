#include <stdio.h>
#include <sndfile.h>
#include <math.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846


int main()
{
    // Abrir archivo de audio para escritura
    SNDFILE* sndFile = NULL;
    SF_INFO sfInfo;
    sfInfo.channels = 1;
    sfInfo.samplerate = 44100;
    sfInfo.format = SF_FORMAT_WAV | SF_FORMAT_PCM_16;
    sndFile = sf_open("INPUT.wav", SFM_WRITE, &sfInfo);
    
    // Generar datos de audio
    const int numFrames = 44100 * 5; // 5 segundos de audio
    short* audioData = (short*)malloc(numFrames * sizeof(short));
    for (int i = 0; i < numFrames; i++)
    {
        audioData[i] = (short)(32767 * sin(2 * M_PI * 440 * i / 44100));
    }
    
    // Escribir datos de audio en archivo
    sf_write_short(sndFile, audioData, numFrames);
    
    // Cerrar archivo de audio
    sf_close(sndFile);
    
    return 0;
}
