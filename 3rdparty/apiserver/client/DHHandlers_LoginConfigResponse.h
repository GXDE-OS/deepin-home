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

/*
 * DHHandlers_LoginConfigResponse.h
 *
 * 
 */

#ifndef DHHandlers_LoginConfigResponse_H
#define DHHandlers_LoginConfigResponse_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "DHEnum.h"
#include "DHObject.h"

namespace DeepinHomeAPI {

class DHHandlers_LoginConfigResponse : public DHObject {
public:
    DHHandlers_LoginConfigResponse();
    DHHandlers_LoginConfigResponse(QString json);
    ~DHHandlers_LoginConfigResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClientId() const;
    void setClientId(const QString &client_id);
    bool is_client_id_Set() const;
    bool is_client_id_Valid() const;

    QString getRedirectUrl() const;
    void setRedirectUrl(const QString &redirect_url);
    bool is_redirect_url_Set() const;
    bool is_redirect_url_Valid() const;

    QList<QString> getScopes() const;
    void setScopes(const QList<QString> &scopes);
    bool is_scopes_Set() const;
    bool is_scopes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString client_id;
    bool m_client_id_isSet;
    bool m_client_id_isValid;

    QString redirect_url;
    bool m_redirect_url_isSet;
    bool m_redirect_url_isValid;

    QList<QString> scopes;
    bool m_scopes_isSet;
    bool m_scopes_isValid;
};

} // namespace DeepinHomeAPI

Q_DECLARE_METATYPE(DeepinHomeAPI::DHHandlers_LoginConfigResponse)

#endif // DHHandlers_LoginConfigResponse_H
