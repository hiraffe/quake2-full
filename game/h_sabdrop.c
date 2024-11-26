// hira: allow users to sabotage weapons

//#include "g_local.h"
//#include "h_sabdrop.h"

/*
=================
Cmd_SabDrop_f

Modified from Cmd_InvDrop_f by BD 12/24
Drop an inventory weapon, sabotaging it in the process. Meant to be bound 	to a key.
=================
*/

/*
void Cmd_SabDrop_f(edict_t* ent)
{
	gitem_t* it;
	ValidateSelectedItem(ent);

	//if no item selected
	if (ent->client->pers.selected_item == -1) {
		gi.cprintf(ent, PRINT_HIGH, "No item to drop.\n");
		return;
	}
	it = &itemlist[ent->client->pers.selected_item];
	//if item cant be dropped
	if (!it->drop) {
		gi.cprintf(ent, PRINT_HIGH, "Item not droppable.\n");
		return;
	}

	//sabotage weapon
	it->wpn_sabo = 1;
	it->drop(ent, it);
}
*/