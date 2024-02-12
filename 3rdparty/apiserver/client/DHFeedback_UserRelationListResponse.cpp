/**
 * Deepin官网
 * deepin的官方网站后台接口
 *
 * The version of the OpenAPI document: 1.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "DHFeedback_UserRelationListResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHFeedback_UserRelationListResponse::DHFeedback_UserRelationListResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHFeedback_UserRelationListResponse::DHFeedback_UserRelationListResponse() {
    this->initializeModel();
}

DHFeedback_UserRelationListResponse::~DHFeedback_UserRelationListResponse() {}

void DHFeedback_UserRelationListResponse::initializeModel() {

    m_feedback_id_isSet = false;
    m_feedback_id_isValid = false;

    m_relation_isSet = false;
    m_relation_isValid = false;
}

void DHFeedback_UserRelationListResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHFeedback_UserRelationListResponse::fromJsonObject(QJsonObject json) {

    m_feedback_id_isValid = ::DeepinHomeAPI::fromJsonValue(feedback_id, json[QString("feedback_id")]);
    m_feedback_id_isSet = !json[QString("feedback_id")].isNull() && m_feedback_id_isValid;

    m_relation_isValid = ::DeepinHomeAPI::fromJsonValue(relation, json[QString("relation")]);
    m_relation_isSet = !json[QString("relation")].isNull() && m_relation_isValid;
}

QString DHFeedback_UserRelationListResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHFeedback_UserRelationListResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_feedback_id_isSet) {
        obj.insert(QString("feedback_id"), ::DeepinHomeAPI::toJsonValue(feedback_id));
    }
    if (m_relation_isSet) {
        obj.insert(QString("relation"), ::DeepinHomeAPI::toJsonValue(relation));
    }
    return obj;
}

QString DHFeedback_UserRelationListResponse::getFeedbackId() const {
    return feedback_id;
}
void DHFeedback_UserRelationListResponse::setFeedbackId(const QString &feedback_id) {
    this->feedback_id = feedback_id;
    this->m_feedback_id_isSet = true;
}

bool DHFeedback_UserRelationListResponse::is_feedback_id_Set() const{
    return m_feedback_id_isSet;
}

bool DHFeedback_UserRelationListResponse::is_feedback_id_Valid() const{
    return m_feedback_id_isValid;
}

QString DHFeedback_UserRelationListResponse::getRelation() const {
    return relation;
}
void DHFeedback_UserRelationListResponse::setRelation(const QString &relation) {
    this->relation = relation;
    this->m_relation_isSet = true;
}

bool DHFeedback_UserRelationListResponse::is_relation_Set() const{
    return m_relation_isSet;
}

bool DHFeedback_UserRelationListResponse::is_relation_Valid() const{
    return m_relation_isValid;
}

bool DHFeedback_UserRelationListResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_feedback_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_relation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHFeedback_UserRelationListResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
