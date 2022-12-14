/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

void bt_mesh_store_net(void);
void bt_mesh_store_iv(bool only_duration);
void bt_mesh_store_seq(void);
void bt_mesh_store_rpl(struct bt_mesh_rpl *rpl);
void bt_mesh_store_subnet(struct bt_mesh_subnet *sub);
void bt_mesh_store_app_key(struct bt_mesh_app_key *key);
void bt_mesh_store_hb_pub(void);
void bt_mesh_store_cfg(bool flush);
void bt_mesh_store_mod_bind(struct bt_mesh_model *mod);
void bt_mesh_store_mod_sub(struct bt_mesh_model *mod);
void bt_mesh_store_mod_pub(struct bt_mesh_model *mod);
void bt_mesh_store_label(void);
void bt_mesh_store_node(struct bt_mesh_node *node);
void bt_mesh_store_role(void);


void bt_mesh_clear_net(void);
void bt_mesh_clear_subnet(struct bt_mesh_subnet *sub);
void bt_mesh_clear_app_key(struct bt_mesh_app_key *key);
void bt_mesh_clear_rpl(void);
void bt_mesh_clear_node(struct bt_mesh_node *node);

void bt_mesh_settings_init(void);
void bt_mesh_settings_deinit(void);

int  bt_mesh_settings_load(bool role_node);
void bt_mesh_settings_flush(void);

