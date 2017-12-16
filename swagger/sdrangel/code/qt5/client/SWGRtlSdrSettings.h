/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGRtlSdrSettings.h
 * 
 * 
 */

#ifndef SWGRtlSdrSettings_H_
#define SWGRtlSdrSettings_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace SWGSDRangel {

class SWGRtlSdrSettings: public SWGObject {
public:
    SWGRtlSdrSettings();
    SWGRtlSdrSettings(QString* json);
    virtual ~SWGRtlSdrSettings();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRtlSdrSettings* fromJson(QString &jsonString);

    qint32 getDevSampleRate();
    void setDevSampleRate(qint32 dev_sample_rate);

    qint32 getLowSampleRate();
    void setLowSampleRate(qint32 low_sample_rate);

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getGain();
    void setGain(qint32 gain);

    qint32 getLoPpmCorrection();
    void setLoPpmCorrection(qint32 lo_ppm_correction);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqImbalance();
    void setIqImbalance(qint32 iq_imbalance);

    qint32 getAgc();
    void setAgc(qint32 agc);

    qint32 getNoModMode();
    void setNoModMode(qint32 no_mod_mode);

    qint32 getTransverterMode();
    void setTransverterMode(qint32 transverter_mode);

    qint64 getTransverterDeltaFrequency();
    void setTransverterDeltaFrequency(qint64 transverter_delta_frequency);


private:
    qint32 dev_sample_rate;
    qint32 low_sample_rate;
    qint64 center_frequency;
    qint32 gain;
    qint32 lo_ppm_correction;
    qint32 log2_decim;
    qint32 fc_pos;
    qint32 dc_block;
    qint32 iq_imbalance;
    qint32 agc;
    qint32 no_mod_mode;
    qint32 transverter_mode;
    qint64 transverter_delta_frequency;
};

}

#endif /* SWGRtlSdrSettings_H_ */