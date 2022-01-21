/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifdef OB_STMT_TYPE_DEF
OB_STMT_TYPE_DEF(T_NONE, err_stmt_type_priv, 0)
OB_STMT_TYPE_DEF(T_SELECT, get_dml_stmt_need_privs, 1)
OB_STMT_TYPE_DEF(T_INSERT, get_dml_stmt_need_privs, 2)
OB_STMT_TYPE_DEF(T_REPLACE, get_dml_stmt_need_privs, 3)
OB_STMT_TYPE_DEF(T_DELETE, get_dml_stmt_need_privs, 4)
OB_STMT_TYPE_DEF(T_UPDATE, get_dml_stmt_need_privs, 5)
OB_STMT_TYPE_DEF(T_EXPLAIN, err_stmt_type_priv, 6)
OB_STMT_TYPE_DEF(T_MERGE, get_dml_stmt_need_privs, 7)
OB_STMT_TYPE_DEF(T_CREATE_TENANT, get_sys_tenant_super_priv, 8)
OB_STMT_TYPE_DEF(T_DROP_TENANT, get_drop_tenant_stmt_need_privs, 9)
OB_STMT_TYPE_DEF(T_LOCK_TENANT, get_lock_tenant_stmt_need_privs, 10)
OB_STMT_TYPE_DEF(T_MODIFY_TENANT, get_modify_tenant_stmt_need_privs, 11)
OB_STMT_TYPE_DEF(T_CHANGE_TENANT, get_change_tenant_privs, 12)
OB_STMT_TYPE_DEF(T_CREATE_RESOURCE_POOL, get_sys_tenant_create_resource_pool_priv, 13)
OB_STMT_TYPE_DEF(T_DROP_RESOURCE_POOL, get_sys_tenant_create_resource_pool_priv, 14)
OB_STMT_TYPE_DEF(T_ALTER_RESOURCE_POOL, get_sys_tenant_create_resource_pool_priv, 15)
OB_STMT_TYPE_DEF(T_SPLIT_RESOURCE_POOL, get_sys_tenant_create_resource_pool_priv, 16)
OB_STMT_TYPE_DEF(T_CREATE_RESOURCE_UNIT, get_sys_tenant_create_resource_unit_priv, 17)
OB_STMT_TYPE_DEF(T_ALTER_RESOURCE_UNIT, get_sys_tenant_create_resource_unit_priv, 18)
OB_STMT_TYPE_DEF(T_DROP_RESOURCE_UNIT, get_sys_tenant_create_resource_unit_priv, 19)
OB_STMT_TYPE_DEF(T_CREATE_TABLE, get_create_table_stmt_need_privs, 20)
OB_STMT_TYPE_DEF(T_DROP_TABLE, get_drop_table_stmt_need_privs, 21)
OB_STMT_TYPE_DEF(T_ALTER_TABLE, get_alter_table_stmt_need_privs, 22)
OB_STMT_TYPE_DEF(T_CREATE_INDEX, get_create_index_stmt_need_privs, 23)
OB_STMT_TYPE_DEF(T_DROP_INDEX, get_drop_index_stmt_need_privs, 24)
OB_STMT_TYPE_DEF(T_CREATE_VIEW, err_stmt_type_priv, 25)
OB_STMT_TYPE_DEF(T_ALTER_VIEW, err_stmt_type_priv, 26)
OB_STMT_TYPE_DEF(T_DROP_VIEW, err_stmt_type_priv, 27)
OB_STMT_TYPE_DEF(T_SHOW_TABLES, err_stmt_type_priv, 29)
OB_STMT_TYPE_DEF(T_SHOW_DATABASES, err_stmt_type_priv, 30)
OB_STMT_TYPE_DEF(T_SHOW_COLUMNS, err_stmt_type_priv, 31)
OB_STMT_TYPE_DEF(T_SHOW_VARIABLES, err_stmt_type_priv, 32)
OB_STMT_TYPE_DEF(T_SHOW_TABLE_STATUS, err_stmt_type_priv, 33)
OB_STMT_TYPE_DEF(T_SHOW_SCHEMA, err_stmt_type_priv, 34)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_DATABASE, err_stmt_type_priv, 35)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_TABLE, err_stmt_type_priv, 36)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_VIEW, err_stmt_type_priv, 37)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_PROCEDURE, err_stmt_type_priv, 38)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_FUNCTION, err_stmt_type_priv, 39)
OB_STMT_TYPE_DEF(T_SHOW_PARAMETERS, err_stmt_type_priv, 40)
OB_STMT_TYPE_DEF(T_SHOW_SERVER_STATUS, err_stmt_type_priv, 41)
OB_STMT_TYPE_DEF(T_SHOW_INDEXES, err_stmt_type_priv, 42)
OB_STMT_TYPE_DEF(T_SHOW_WARNINGS, err_stmt_type_priv, 43)
OB_STMT_TYPE_DEF(T_SHOW_ERRORS, err_stmt_type_priv, 44)
OB_STMT_TYPE_DEF(T_SHOW_PROCESSLIST, err_stmt_type_priv, 45)
OB_STMT_TYPE_DEF(T_SHOW_CHARSET, err_stmt_type_priv, 46)
OB_STMT_TYPE_DEF(T_SHOW_COLLATION, err_stmt_type_priv, 47)
OB_STMT_TYPE_DEF(T_SHOW_TABLEGROUPS, err_stmt_type_priv, 48)
OB_STMT_TYPE_DEF(T_SHOW_STATUS, err_stmt_type_priv, 49)
OB_STMT_TYPE_DEF(T_SHOW_TENANT, err_stmt_type_priv, 50)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_TENANT, err_stmt_type_priv, 51)
OB_STMT_TYPE_DEF(T_SHOW_TRACE, err_stmt_type_priv, 52)
OB_STMT_TYPE_DEF(T_SHOW_ENGINES, err_stmt_type_priv, 53)
OB_STMT_TYPE_DEF(T_SHOW_PRIVILEGES, err_stmt_type_priv, 54)
OB_STMT_TYPE_DEF(T_SHOW_PROCEDURE_STATUS, err_stmt_type_priv, 55)
OB_STMT_TYPE_DEF(T_SHOW_FUNCTION_STATUS, err_stmt_type_priv, 56)
OB_STMT_TYPE_DEF(T_SHOW_GRANTS, err_stmt_type_priv, 57)
OB_STMT_TYPE_DEF(T_CREATE_USER, get_create_user_privs, 58)
OB_STMT_TYPE_DEF(T_DROP_USER, get_create_user_privs, 59)
OB_STMT_TYPE_DEF(T_SET_PASSWORD, get_create_user_privs, 60)
OB_STMT_TYPE_DEF(T_LOCK_USER, get_create_user_privs, 61)
OB_STMT_TYPE_DEF(T_RENAME_USER, get_create_user_privs, 62)
OB_STMT_TYPE_DEF(T_GRANT, get_grant_stmt_need_privs, 63)
OB_STMT_TYPE_DEF(T_REVOKE, get_revoke_stmt_need_privs, 64)
OB_STMT_TYPE_DEF(T_PREPARE, no_priv_needed, 65)
OB_STMT_TYPE_DEF(T_VARIABLE_SET, get_variable_set_stmt_need_privs, 66)
OB_STMT_TYPE_DEF(T_EXECUTE, no_priv_needed, 67)
OB_STMT_TYPE_DEF(T_DEALLOCATE, no_priv_needed, 68)
OB_STMT_TYPE_DEF(T_START_TRANS, no_priv_needed, 69)
OB_STMT_TYPE_DEF(T_END_TRANS, no_priv_needed, 70)
OB_STMT_TYPE_DEF(T_KILL, no_priv_needed, 71)
OB_STMT_TYPE_DEF(T_ALTER_SYSTEM, get_sys_tenant_super_priv, 72)
OB_STMT_TYPE_DEF(T_ALTER_SYSTEM_SETTP, get_sys_tenant_alter_system_priv, 73)
OB_STMT_TYPE_DEF(T_CHANGE_OBI, err_stmt_type_priv, 74)
OB_STMT_TYPE_DEF(T_SWITCH_MASTER, get_sys_tenant_super_priv, 75)
OB_STMT_TYPE_DEF(T_SERVER_ACTION, get_sys_tenant_super_priv, 76)
OB_STMT_TYPE_DEF(T_BOOTSTRAP, get_boot_strap_stmt_need_privs, 77)
OB_STMT_TYPE_DEF(T_CS_DISKMAINTAIN, err_stmt_type_priv, 78)
OB_STMT_TYPE_DEF(T_TABLET_CMD, err_stmt_type_priv, 79)
OB_STMT_TYPE_DEF(T_REPORT_REPLICA, get_sys_tenant_alter_system_priv, 80)
OB_STMT_TYPE_DEF(T_SWITCH_ROOTSERVER, err_stmt_type_priv, 81)
OB_STMT_TYPE_DEF(T_SWITCH_UPDATESERVER, err_stmt_type_priv, 82)
OB_STMT_TYPE_DEF(T_CLUSTER_MANAGER, err_stmt_type_priv, 83)
OB_STMT_TYPE_DEF(T_FREEZE, get_sys_tenant_alter_system_priv, 84)
OB_STMT_TYPE_DEF(T_FLUSH_CACHE, get_sys_tenant_alter_system_priv, 85)
OB_STMT_TYPE_DEF(T_FLUSH_KVCACHE, get_sys_tenant_alter_system_priv, 86)
OB_STMT_TYPE_DEF(T_FLUSH_ILOGCACHE, get_sys_tenant_alter_system_priv, 87)
OB_STMT_TYPE_DEF(T_DROP_MEMTABLE, err_stmt_type_priv, 88)
OB_STMT_TYPE_DEF(T_CLEAR_MEMTABLE, err_stmt_type_priv, 89)
OB_STMT_TYPE_DEF(T_PRINT_ROOT_TABLE, err_stmt_type_priv, 90)
OB_STMT_TYPE_DEF(T_ADD_UPDATESERVER, err_stmt_type_priv, 91)
OB_STMT_TYPE_DEF(T_DELETE_UPDATESERVER, err_stmt_type_priv, 92)
OB_STMT_TYPE_DEF(T_CHECK_ROOT_TABLE, err_stmt_type_priv, 93)
OB_STMT_TYPE_DEF(T_CLEAR_ROOT_TABLE, get_sys_tenant_alter_system_priv, 94)
OB_STMT_TYPE_DEF(T_REFRESH_SCHEMA, get_sys_tenant_alter_system_priv, 95)
OB_STMT_TYPE_DEF(T_CREATE_DATABASE, get_create_database_stmt_need_privs, 96)
OB_STMT_TYPE_DEF(T_USE_DATABASE, no_priv_needed, 97)
OB_STMT_TYPE_DEF(T_ADMIN_SERVER, get_sys_tenant_alter_system_priv, 98)
OB_STMT_TYPE_DEF(T_ADMIN_ZONE, get_sys_tenant_alter_system_priv, 99)
OB_STMT_TYPE_DEF(T_SWITCH_REPLICA_ROLE, get_sys_tenant_alter_system_priv, 100)
OB_STMT_TYPE_DEF(T_DROP_REPLICA, get_sys_tenant_alter_system_priv, 101)
OB_STMT_TYPE_DEF(T_MIGRATE_REPLICA, get_sys_tenant_alter_system_priv, 102)
OB_STMT_TYPE_DEF(T_RECYCLE_REPLICA, get_sys_tenant_alter_system_priv, 103)
OB_STMT_TYPE_DEF(T_ADMIN_MERGE, get_sys_tenant_alter_system_priv, 104)
OB_STMT_TYPE_DEF(T_ALTER_DATABASE, get_alter_database_stmt_need_privs, 105)
OB_STMT_TYPE_DEF(T_DROP_DATABASE, get_drop_database_stmt_need_privs, 106)
OB_STMT_TYPE_DEF(T_CREATE_TABLEGROUP, get_create_tablegroup_stmt_need_privs, 107)
OB_STMT_TYPE_DEF(T_DROP_TABLEGROUP, get_drop_tablegroup_stmt_need_privs, 108)
OB_STMT_TYPE_DEF(T_ALTER_TABLEGROUP, get_alter_tablegroup_stmt_need_privs, 109)
OB_STMT_TYPE_DEF(T_TRUNCATE_TABLE, get_truncate_table_stmt_need_privs, 110)
OB_STMT_TYPE_DEF(T_RENAME_TABLE, get_rename_table_stmt_need_privs, 111)
OB_STMT_TYPE_DEF(T_CREATE_TABLE_LIKE, get_create_table_like_stmt_need_privs, 112)
OB_STMT_TYPE_DEF(T_CLEAR_LOCATION_CACHE, get_sys_tenant_alter_system_priv, 114)
OB_STMT_TYPE_DEF(T_RELOAD_GTS, get_sys_tenant_alter_system_priv, 115)
OB_STMT_TYPE_DEF(T_RELOAD_UNIT, get_sys_tenant_alter_system_priv, 116)
OB_STMT_TYPE_DEF(T_RELOAD_SERVER, get_sys_tenant_alter_system_priv, 117)
OB_STMT_TYPE_DEF(T_RELOAD_ZONE, get_sys_tenant_alter_system_priv, 118)
OB_STMT_TYPE_DEF(T_CLEAR_MERGE_ERROR, get_sys_tenant_alter_system_priv, 119)
OB_STMT_TYPE_DEF(T_MIGRATE_UNIT, get_sys_tenant_alter_system_priv, 120)
OB_STMT_TYPE_DEF(T_UPGRADE_VIRTUAL_SCHEMA, get_sys_tenant_alter_system_priv, 121)
OB_STMT_TYPE_DEF(T_RUN_JOB, get_sys_tenant_alter_system_priv, 122)
OB_STMT_TYPE_DEF(T_EMPTY_QUERY, no_priv_needed, 123)
OB_STMT_TYPE_DEF(T_CREATE_OUTLINE, no_priv_needed, 124)
OB_STMT_TYPE_DEF(T_ALTER_OUTLINE, no_priv_needed, 125)
OB_STMT_TYPE_DEF(T_DROP_OUTLINE, no_priv_needed, 126)
OB_STMT_TYPE_DEF(T_ALTER_BASELINE, get_sys_tenant_alter_system_priv, 127)
OB_STMT_TYPE_DEF(T_LOAD_BASELINE, get_sys_tenant_alter_system_priv, 128)
OB_STMT_TYPE_DEF(T_SWITCH_RS_ROLE, get_sys_tenant_alter_system_priv, 129)
OB_STMT_TYPE_DEF(T_PURGE_RECYCLEBIN, get_purge_recyclebin_stmt_need_privs, 134)
OB_STMT_TYPE_DEF(T_PURGE_TENANT, get_purge_tenant_stmt_need_privs, 135)
OB_STMT_TYPE_DEF(T_PURGE_DATABASE, get_purge_database_stmt_need_privs, 136)
OB_STMT_TYPE_DEF(T_PURGE_TABLE, get_purge_table_stmt_need_privs, 137)
OB_STMT_TYPE_DEF(T_PURGE_INDEX, get_purge_index_stmt_need_privs, 138)
OB_STMT_TYPE_DEF(T_SHOW_RECYCLEBIN, err_stmt_type_priv, 139)
OB_STMT_TYPE_DEF(T_ADMIN_UPGRADE_CMD, get_sys_tenant_alter_system_priv, 140)
OB_STMT_TYPE_DEF(T_CREATE_ROUTINE, no_priv_needed, 141)
OB_STMT_TYPE_DEF(T_DROP_ROUTINE, no_priv_needed, 142)
OB_STMT_TYPE_DEF(T_ALTER_ROUTINE, no_priv_needed, 143)
OB_STMT_TYPE_DEF(T_CALL_PROCEDURE, no_priv_needed, 144)
OB_STMT_TYPE_DEF(T_ANONYMOUS_BLOCK, no_priv_needed, 145)
OB_STMT_TYPE_DEF(T_CREATE_PACKAGE, no_priv_needed, 146)
OB_STMT_TYPE_DEF(T_CREATE_PACKAGE_BODY, no_priv_needed, 147)
OB_STMT_TYPE_DEF(T_ALTER_PACKAGE, no_priv_needed, 148)
OB_STMT_TYPE_DEF(T_DROP_PACKAGE, no_priv_needed, 149)
OB_STMT_TYPE_DEF(T_REFRESH_TIME_ZONE_INFO, get_sys_tenant_alter_system_priv, 150)
OB_STMT_TYPE_DEF(T_CANCEL_TASK, get_sys_tenant_alter_system_priv, 151)
OB_STMT_TYPE_DEF(T_CHANGE_REPLICA, get_sys_tenant_alter_system_priv, 152)
OB_STMT_TYPE_DEF(T_RESTORE_TENANT, get_sys_tenant_alter_system_priv, 153)
OB_STMT_TYPE_DEF(T_SET_DISK_VALID, get_sys_tenant_alter_system_priv, 154)
OB_STMT_TYPE_DEF(T_CREATE_SYNONYM, get_create_synonym_priv, 155)
OB_STMT_TYPE_DEF(T_DROP_SYNONYM, get_drop_synonym_priv, 156)
OB_STMT_TYPE_DEF(T_CLEAR_BALANCE_TASK, get_sys_tenant_alter_system_priv, 157)
OB_STMT_TYPE_DEF(T_BUILD_INDEX_SSTABLE, get_sys_tenant_super_priv, 158)
OB_STMT_TYPE_DEF(T_ANALYZE, no_priv_needed, 159)
OB_STMT_TYPE_DEF(T_SHOW_CREATE_TABLEGROUP, err_stmt_type_priv, 160)
OB_STMT_TYPE_DEF(T_LOAD_DATA, get_load_data_stmt_need_privs, 161)
OB_STMT_TYPE_DEF(T_STMT_TYPE_MAX, get_sys_tenant_super_priv, 162)
OB_STMT_TYPE_DEF(T_CREATE_FUNC, no_priv_needed, 163)
OB_STMT_TYPE_DEF(T_DROP_FUNC, no_priv_needed, 164)
OB_STMT_TYPE_DEF(T_CREATE_SEQUENCE, no_priv_needed, 165)
OB_STMT_TYPE_DEF(T_ALTER_SEQUENCE, no_priv_needed, 166)
OB_STMT_TYPE_DEF(T_DROP_SEQUENCE, no_priv_needed, 167)
OB_STMT_TYPE_DEF(T_SET_TABLE_COMMENT, no_priv_needed, 168)
OB_STMT_TYPE_DEF(T_SET_COLUMN_COMMENT, no_priv_needed, 169)
OB_STMT_TYPE_DEF(T_SWITCHOVER, get_sys_tenant_super_priv, 170)
OB_STMT_TYPE_DEF(T_CREATE_TYPE, no_priv_needed, 171)
OB_STMT_TYPE_DEF(T_DROP_TYPE, no_priv_needed, 172)
OB_STMT_TYPE_DEF(T_ALTER_DISKGROUP_ADD_DISK, get_sys_tenant_super_priv, 173)
OB_STMT_TYPE_DEF(T_ALTER_DISKGROUP_DROP_DISK, get_sys_tenant_super_priv, 174)
OB_STMT_TYPE_DEF(T_REMOVE_CLUSTER, get_sys_tenant_super_priv, 175)
OB_STMT_TYPE_DEF(T_ADD_CLUSTER, get_sys_tenant_super_priv, 176)
OB_STMT_TYPE_DEF(T_ALTER_SYSTEM_SET_PARAMETER, get_sys_tenant_alter_system_priv, 177)
OB_STMT_TYPE_DEF(T_OPTIMIZE_TABLE, no_priv_needed, 178)
OB_STMT_TYPE_DEF(T_OPTIMIZE_TENANT, no_priv_needed, 179)
OB_STMT_TYPE_DEF(T_OPTIMIZE_ALL, get_sys_tenant_super_priv, 180)
OB_STMT_TYPE_DEF(T_CREATE_SAVEPOINT, no_priv_needed, 181)
OB_STMT_TYPE_DEF(T_ROLLBACK_SAVEPOINT, no_priv_needed, 182)
OB_STMT_TYPE_DEF(T_RELEASE_SAVEPOINT, no_priv_needed, 183)
OB_STMT_TYPE_DEF(T_CREATE_TRIGGER, no_priv_needed, 188)
OB_STMT_TYPE_DEF(T_DROP_TRIGGER, no_priv_needed, 189)
OB_STMT_TYPE_DEF(T_CREATE_ROLE, no_priv_needed, 191)
OB_STMT_TYPE_DEF(T_DROP_ROLE, no_priv_needed, 192)
OB_STMT_TYPE_DEF(T_ALTER_ROLE, no_priv_needed, 193)
OB_STMT_TYPE_DEF(T_SET_ROLE, no_priv_needed, 194)
OB_STMT_TYPE_DEF(T_SYSTEM_GRANT, no_priv_needed, 195)
OB_STMT_TYPE_DEF(T_SYSTEM_REVOKE, no_priv_needed, 196)
OB_STMT_TYPE_DEF(T_USER_PROFILE, no_priv_needed, 197)
OB_STMT_TYPE_DEF(T_ALTER_USER_PROFILE, get_create_user_privs, 198)
OB_STMT_TYPE_DEF(T_AUDIT, no_priv_needed, 199)
OB_STMT_TYPE_DEF(T_LOGIN, no_priv_needed, 200)
OB_STMT_TYPE_DEF(T_LOGOFF, no_priv_needed, 201)
OB_STMT_TYPE_DEF(T_ALTER_CLUSTER, get_sys_tenant_super_priv, 202)
OB_STMT_TYPE_DEF(T_ARCHIVE_LOG, get_sys_tenant_alter_system_priv, 203)
OB_STMT_TYPE_DEF(T_BACKUP_DATABASE, get_sys_tenant_alter_system_priv, 204)
OB_STMT_TYPE_DEF(T_BACKUP_MANAGE, get_sys_tenant_alter_system_priv, 205)
OB_STMT_TYPE_DEF(T_RESTORE_TENANT_2, get_sys_tenant_alter_system_priv, 206)
OB_STMT_TYPE_DEF(T_REFRESH_MEMORY_STAT, get_sys_tenant_super_priv, 207)
OB_STMT_TYPE_DEF(T_PHYSICAL_RESTORE_TENANT, get_sys_tenant_alter_system_priv, 208)
OB_STMT_TYPE_DEF(T_ADMIN_ROLLING_UPGRADE_CMD, get_sys_tenant_super_priv, 210)
OB_STMT_TYPE_DEF(T_GRANT_ROLE, no_priv_needed, 211)
OB_STMT_TYPE_DEF(T_REVOKE_ROLE, no_priv_needed, 212)
OB_STMT_TYPE_DEF(T_MERGE_RESOURCE_POOL, get_sys_tenant_super_priv, 213)
OB_STMT_TYPE_DEF(T_SHOW_TRIGGERS, err_stmt_type_priv, 214)
OB_STMT_TYPE_DEF(T_CREATE_DBLINK, no_priv_needed, 215)
OB_STMT_TYPE_DEF(T_DROP_DBLINK, no_priv_needed, 216)
OB_STMT_TYPE_DEF(T_CREATE_PUB_SYNONYM, get_create_synonym_priv, 217)
OB_STMT_TYPE_DEF(T_DROP_PUB_SYNONYM, get_drop_synonym_priv, 218)
OB_STMT_TYPE_DEF(T_CREATE_PROFILE, no_priv_needed, 219)
OB_STMT_TYPE_DEF(T_ALTER_PROFILE, no_priv_needed, 220)
OB_STMT_TYPE_DEF(T_DROP_PROFILE, no_priv_needed, 221)
OB_STMT_TYPE_DEF(T_ALTER_USER, get_create_user_privs, 222)
OB_STMT_TYPE_DEF(T_XA_START, no_priv_needed, 223)
OB_STMT_TYPE_DEF(T_XA_END, no_priv_needed, 224)
OB_STMT_TYPE_DEF(T_XA_PREPARE, no_priv_needed, 225)
OB_STMT_TYPE_DEF(T_XA_COMMIT, no_priv_needed, 226)
OB_STMT_TYPE_DEF(T_XA_ROLLBACK, no_priv_needed, 227)
OB_STMT_TYPE_DEF(T_BACKUP_BACKUPSET, get_sys_tenant_alter_system_priv, 228)
OB_STMT_TYPE_DEF(T_BACKUP_ARCHIVELOG, get_sys_tenant_alter_system_priv, 229)
OB_STMT_TYPE_DEF(T_ALTER_TRIGGER, no_priv_needed, 230)
OB_STMT_TYPE_DEF(T_ALTER_USER_PRIMARY_ZONE, get_create_user_privs, 231)
OB_STMT_TYPE_DEF(T_SHOW_WISHES, err_stmt_type_priv, 232)

OB_STMT_TYPE_DEF(T_ENABLE_SQL_THROTTLE, no_priv_needed, 250)
OB_STMT_TYPE_DEF(T_DISABLE_SQL_THROTTLE, no_priv_needed, 251)
OB_STMT_TYPE_DEF(T_BACKUP_SET_ENCRYPTION, get_sys_tenant_super_priv, 252)
OB_STMT_TYPE_DEF(T_BACKUP_SET_DECRYPTION, get_sys_tenant_super_priv, 253)

OB_STMT_TYPE_DEF(T_CREATE_RESTORE_POINT, get_restore_point_priv, 255)
OB_STMT_TYPE_DEF(T_DROP_RESTORE_POINT, get_restore_point_priv, 256)

OB_STMT_TYPE_DEF(T_ADMIN_RUN_UPGRADE_JOB, get_sys_tenant_alter_system_priv, 257)
OB_STMT_TYPE_DEF(T_ADMIN_STOP_UPGRADE_JOB, get_sys_tenant_alter_system_priv, 258)
OB_STMT_TYPE_DEF(T_FLUSH_DAG_WARNINGS, get_sys_tenant_super_priv, 259)
OB_STMT_TYPE_DEF(T_CLUSTER_ACTION_VERIFY, get_sys_tenant_super_priv, 260)
OB_STMT_TYPE_DEF(T_BACKUP_BACKUPPIECE, get_sys_tenant_alter_system_priv, 261)
OB_STMT_TYPE_DEF(T_ADD_RESTORE_SOURCE, get_sys_tenant_alter_system_priv, 262)
OB_STMT_TYPE_DEF(T_CLEAR_RESTORE_SOURCE, get_sys_tenant_alter_system_priv, 263)
OB_STMT_TYPE_DEF(T_SHOW_RESTORE_PREVIEW, err_stmt_type_priv, 264)
OB_STMT_TYPE_DEF(T_DISCONNECT_CLUSTER, get_sys_tenant_super_priv, 270)
OB_STMT_TYPE_DEF(T_MAX, err_stmt_type_priv, 500)
#endif

#ifndef OCEANBASE_SQL_RESOLVER_OB_STMT_TYPE_
#define OCEANBASE_SQL_RESOLVER_OB_STMT_TYPE_

namespace oceanbase {
namespace sql {
namespace stmt {

enum StmtType : int32_t {
#define OB_STMT_TYPE_DEF(stmt_type, priv_check_func, id) stmt_type = id,
#include "sql/resolver/ob_stmt_type.h"
#undef OB_STMT_TYPE_DEF

#define IS_INSERT_OR_REPLACE_STMT(stmt_type) (stmt::T_INSERT == (stmt_type) || stmt::T_REPLACE == (stmt_type))
};

struct StmtTypeIndex {
public:
  StmtTypeIndex() : stmt_type_idx_()
  {
    int i = 0;
    for (int j = 0; j < ARRAYSIZEOF(stmt_type_idx_); j++) {
      stmt_type_idx_[j] = -1;
    }
#define OB_STMT_TYPE_DEF(stmt_type, priv_check_func, id) stmt_type_idx_[stmt_type] = i++;
#include "sql/resolver/ob_stmt_type.h"
#undef OB_STMT_TYPE_DEF
  }
  int32_t stmt_type_idx_[T_MAX + 1];
};

inline int32_t get_stmt_type_idx(StmtType type)
{
  static StmtTypeIndex inst;
  return inst.stmt_type_idx_[type];
}

}  // namespace stmt
}  // namespace sql
}  // namespace oceanbase

#endif /* _OB_STMT_TYPE_H */
