#include <QString>
#include <QSettings>
#include <QCoreApplication>
#include <QDir>

#define CONFIG_PATH "config.ini"

#define DEFAULT_PATH "/defult"
#define OUTPUT_PATH "/output"
#define CURRENT_PATH "/current"

#define INFO_AUTHOR "Bill Huang"
#define INFO_ORG "Wingtech"
#define INFO_ORG_DOMAIN "com.wingtech"
#define INFO_APP_NAME "WT ThemeEditor"

class Config{
public:
    static void initSettings(){
        QSettings settings(CONFIG_PATH,QSettings::IniFormat);
        QString default_path=qApp->applicationDirPath() + DEFAULT_PATH;
        QString output_path=qApp->applicationDirPath() + OUTPUT_PATH;
        QString current_path=qApp->applicationDirPath() + CURRENT_PATH;
        if(!settings.contains("/devinfo/author")){
            settings.setValue("/devinfo/author", INFO_AUTHOR);
        }
        if(!settings.contains("/devinfo/organization")){
            settings.setValue("/devinfo/organization", INFO_ORG);
        }
        if(!settings.contains("/devinfo/org_domain")){
            settings.setValue("/devinfo/org_domain", INFO_ORG_DOMAIN);
        }
        if(!settings.contains("/devinfo/app_name")){
            settings.setValue("/devinfo/app_name", INFO_APP_NAME);
        }
        if(!settings.contains("/dir/default")){
            settings.setValue("/dir/default", default_path);
        }
        if(!settings.contains("/dir/output")){
            settings.setValue("/dir/output", output_path);
        }
        if(!settings.contains("/dir/current")){
            settings.setValue("/dir/current", current_path);
        }
    }

};
