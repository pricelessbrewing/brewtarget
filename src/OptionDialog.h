/*
 * OptionDialog.h is part of Brewtarget, and is Copyright Philip G. Lee
 * (rocketman768@gmail.com), 2009.
 *
 * Brewtarget is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Brewtarget is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _OPTIONDIALOG_H
#define	_OPTIONDIALOG_H

class OptionDialog;

#include <QDialog>
#include <QWidget>
#include <QAbstractButton>
#include <QMap>
#include <QString>
#include "ui_optionsDialog.h"
#include "unit.h"

class OptionDialog : public QDialog, public Ui::optionsDialog
{
   Q_OBJECT
public:
   OptionDialog(QWidget *parent=0);

public slots:
   void show();
   void saveAndClose();
   void cancel();
   
private:
   void showChanges();
   QButtonGroup *languageGroup;
   QButtonGroup *colorGroup, *ibuGroup;
   QButtonGroup *weightGroup, *volumeGroup, *tempGroup, *gravGroup, *colorUnitGroup;
   //! This map makes correspondences from two-letter language codes ("es" for spanish) to their push buttons.
   QMap<QString,QPushButton*> languageToButtonMap;
};

#endif	/* _OPTIONDIALOG_H */

