/* @@@LICENSE
*
*      Copyright (c) 2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
LICENSE@@@ */

#ifndef WEBKITEVENTLISTENER_H
#define WEBKITEVENTLISTENER_H

#include <palmwebglobal.h>

class BackupManager;

class WebKitEventListener : public Palm::WebKitEventListener
{
public:

	WebKitEventListener	( BackupManager* backupMgr );

	virtual	void	dbDumpStarted	( const Palm::DbBackupStatus& status, void* userData );
	virtual	void	dbDumpStopped	( const Palm::DbBackupStatus& status, void* userData );
	virtual	void	dbRestoreStarted( const Palm::DbBackupStatus& status, void* userData );
	virtual	void	dbRestoreStopped( const Palm::DbBackupStatus& status, void* userData );
	virtual void 	dbMoveStatus    ( int err );

private:

	BackupManager*	m_backupMgr;
};

#endif // WEBKITEVENTLISTENER_H
