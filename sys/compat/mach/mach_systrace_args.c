/*
 * System call argument to DTrace register array converstion.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * This file is part of the DTrace syscall provider.
 */

static void
systrace_args(int sysnum, void *params, uint64_t *uarg, int *n_args)
{
	int64_t *iarg  = (int64_t *) uarg;
	switch (sysnum) {
#if defined(_KERNEL_OPT)
#endif
	/* _kernelrpc_mach_vm_allocate_trap */
	case 10: {
		struct _kernelrpc_mach_vm_allocate_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		uarg[1] = (intptr_t) p->address; /* mach_vm_offset_t * */
		iarg[2] = p->size; /* mach_vm_size_t */
		iarg[3] = p->flags; /* int */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_vm_deallocate_trap */
	case 12: {
		struct _kernelrpc_mach_vm_deallocate_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		uarg[1] = (intptr_t) p->address; /* mach_vm_offset_t * */
		iarg[2] = p->size; /* mach_vm_size_t */
		*n_args = 3;
		break;
	}
	/* _kernelrpc_mach_vm_protect_trap */
	case 14: {
		struct _kernelrpc_mach_vm_protect_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->address; /* mach_vm_offset_t */
		iarg[2] = p->size; /* mach_vm_size_t */
		iarg[3] = p->set_maximum; /* int */
		iarg[4] = p->new_protection; /* vm_prot_t */
		*n_args = 5;
		break;
	}
	/* _kernelrpc_mach_vm_map_trap */
	case 15: {
		struct _kernelrpc_mach_vm_map_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		uarg[1] = (intptr_t) p->address; /* mach_vm_offset_t * */
		iarg[2] = p->size; /* mach_vm_size_t */
		iarg[3] = p->mask; /* mach_vm_offset_t */
		iarg[4] = p->flags; /* int */
		iarg[5] = p->cur_protection; /* vm_prot_t */
		*n_args = 6;
		break;
	}
	/* _kernelrpc_mach_port_allocate_trap */
	case 16: {
		struct _kernelrpc_mach_port_allocate_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->right; /* mach_port_right_t */
		uarg[2] = (intptr_t) p->name; /* mach_port_name_t * */
		*n_args = 3;
		break;
	}
	/* _kernelrpc_mach_port_destroy_trap */
	case 17: {
		struct _kernelrpc_mach_port_destroy_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		*n_args = 2;
		break;
	}
	/* _kernelrpc_mach_port_deallocate_trap */
	case 18: {
		struct _kernelrpc_mach_port_deallocate_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		*n_args = 2;
		break;
	}
	/* _kernelrpc_mach_port_mod_refs_trap */
	case 19: {
		struct _kernelrpc_mach_port_mod_refs_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		iarg[2] = p->right; /* mach_port_right_t */
		iarg[3] = p->delta; /* mach_port_delta_t */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_port_move_member_trap */
	case 20: {
		struct _kernelrpc_mach_port_move_member_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->member; /* mach_port_name_t */
		iarg[2] = p->after; /* mach_port_name_t */
		*n_args = 3;
		break;
	}
	/* _kernelrpc_mach_port_insert_right_trap */
	case 21: {
		struct _kernelrpc_mach_port_insert_right_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		iarg[2] = p->poly; /* mach_port_name_t */
		iarg[3] = p->polyPoly; /* mach_msg_type_name_t */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_port_insert_member_trap */
	case 22: {
		struct _kernelrpc_mach_port_insert_member_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		iarg[2] = p->pset; /* mach_port_name_t */
		*n_args = 3;
		break;
	}
	/* _kernelrpc_mach_port_extract_member_trap */
	case 23: {
		struct _kernelrpc_mach_port_extract_member_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		iarg[2] = p->pset; /* mach_port_name_t */
		*n_args = 3;
		break;
	}
	/* _kernelrpc_mach_port_construct_trap */
	case 24: {
		struct _kernelrpc_mach_port_construct_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->options; /* mach_port_options_t */
		uarg[2] = p->context; /* uint64_t */
		uarg[3] = (intptr_t) p->name; /* mach_port_name_t * */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_port_destruct_trap */
	case 25: {
		struct _kernelrpc_mach_port_destruct_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		iarg[2] = p->srdelta; /* mach_port_delta_t */
		uarg[3] = p->guard; /* uint64_t */
		*n_args = 4;
		break;
	}
	/* mach_reply_port */
	case 26: {
		*n_args = 0;
		break;
	}
	/* mach_thread_self_trap */
	case 27: {
		*n_args = 0;
		break;
	}
	/* mach_task_self_trap */
	case 28: {
		*n_args = 0;
		break;
	}
	/* mach_host_self_trap */
	case 29: {
		*n_args = 0;
		break;
	}
	/* mach_msg_trap */
	case 31: {
		struct mach_msg_trap_args *p = params;
		uarg[0] = (intptr_t) p->msg; /* mach_msg_header_t * */
		iarg[1] = p->option; /* mach_msg_option_t */
		iarg[2] = p->send_size; /* mach_msg_size_t */
		iarg[3] = p->rcv_size; /* mach_msg_size_t */
		iarg[4] = p->rcv_name; /* mach_port_name_t */
		iarg[5] = p->timeout; /* mach_msg_timeout_t */
		iarg[6] = p->notify; /* mach_port_name_t */
		*n_args = 7;
		break;
	}
	/* mach_msg_overwrite_trap */
	case 32: {
		struct mach_msg_overwrite_trap_args *p = params;
		uarg[0] = (intptr_t) p->msg; /* mach_msg_header_t * */
		iarg[1] = p->option; /* mach_msg_option_t */
		iarg[2] = p->send_size; /* mach_msg_size_t */
		iarg[3] = p->rcv_size; /* mach_msg_size_t */
		iarg[4] = p->rcv_name; /* mach_port_name_t */
		iarg[5] = p->timeout; /* mach_msg_timeout_t */
		iarg[6] = p->notify; /* mach_port_name_t */
		uarg[7] = (intptr_t) p->rcv_msg; /* mach_msg_header_t * */
		iarg[8] = p->scatter_list_size; /* mach_msg_size_t */
		*n_args = 9;
		break;
	}
	/* mach_semaphore_signal_trap */
	case 33: {
		struct mach_semaphore_signal_trap_args *p = params;
		iarg[0] = p->signal_name; /* mach_port_name_t */
		*n_args = 1;
		break;
	}
	/* mach_semaphore_signal_all_trap */
	case 34: {
		struct mach_semaphore_signal_all_trap_args *p = params;
		iarg[0] = p->signal_name; /* mach_port_name_t */
		*n_args = 1;
		break;
	}
	/* mach_semaphore_signal_thread_trap */
	case 35: {
		struct mach_semaphore_signal_thread_trap_args *p = params;
		iarg[0] = p->signal_name; /* mach_port_name_t */
		iarg[1] = p->thread; /* mach_port_name_t */
		*n_args = 2;
		break;
	}
	/* mach_semaphore_wait_trap */
	case 36: {
		struct mach_semaphore_wait_trap_args *p = params;
		iarg[0] = p->wait_name; /* mach_port_name_t */
		*n_args = 1;
		break;
	}
	/* mach_semaphore_wait_signal_trap */
	case 37: {
		struct mach_semaphore_wait_signal_trap_args *p = params;
		iarg[0] = p->wait_name; /* mach_port_name_t */
		iarg[1] = p->signal_name; /* mach_port_name_t */
		*n_args = 2;
		break;
	}
	/* mach_semaphore_timedwait_trap */
	case 38: {
		struct mach_semaphore_timedwait_trap_args *p = params;
		iarg[0] = p->wait_name; /* mach_port_name_t */
		uarg[1] = p->sec; /* unsigned int */
		iarg[2] = p->nsec; /* mach_clock_res_t */
		*n_args = 3;
		break;
	}
	/* mach_semaphore_timedwait_signal_trap */
	case 39: {
		struct mach_semaphore_timedwait_signal_trap_args *p = params;
		iarg[0] = p->wait_name; /* mach_port_name_t */
		iarg[1] = p->signal_name; /* mach_port_name_t */
		uarg[2] = p->sec; /* unsigned int */
		iarg[3] = p->nsec; /* mach_clock_res_t */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_port_guard_trap */
	case 41: {
		struct _kernelrpc_mach_port_guard_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		uarg[2] = p->guard; /* uint64_t */
		iarg[3] = p->strict; /* int */
		*n_args = 4;
		break;
	}
	/* _kernelrpc_mach_port_unguard_trap */
	case 42: {
		struct _kernelrpc_mach_port_unguard_trap_args *p = params;
		iarg[0] = p->target; /* mach_port_name_t */
		iarg[1] = p->name; /* mach_port_name_t */
		uarg[2] = p->guard; /* uint64_t */
		*n_args = 3;
		break;
	}
	/* mach_map_fd */
	case 43: {
		struct mach_map_fd_args *p = params;
		iarg[0] = p->fd; /* int */
		iarg[1] = p->offset; /* mach_vm_offset_t */
		uarg[2] = (intptr_t) p->va; /* mach_vm_offset_t * */
		iarg[3] = p->findspace; /* mach_boolean_t */
		iarg[4] = p->size; /* mach_vm_size_t */
		*n_args = 5;
		break;
	}
	/* mach_task_name_for_pid */
	case 44: {
		struct mach_task_name_for_pid_args *p = params;
		iarg[0] = p->target_tport; /* mach_port_name_t */
		iarg[1] = p->pid; /* int */
		uarg[2] = (intptr_t) p->tn; /* mach_port_t * */
		*n_args = 3;
		break;
	}
	/* mach_task_for_pid */
	case 45: {
		struct mach_task_for_pid_args *p = params;
		iarg[0] = p->target_tport; /* mach_port_t */
		iarg[1] = p->pid; /* int */
		uarg[2] = (intptr_t) p->t; /* mach_port_t * */
		*n_args = 3;
		break;
	}
	/* mach_pid_for_task */
	case 46: {
		struct mach_pid_for_task_args *p = params;
		iarg[0] = p->t; /* mach_port_t */
		uarg[1] = (intptr_t) p->pid; /* int * */
		*n_args = 2;
		break;
	}
	/* mach_macx_swapon */
	case 48: {
		struct mach_macx_swapon_args *p = params;
		uarg[0] = (intptr_t) p->name; /* char * */
		iarg[1] = p->flags; /* int */
		iarg[2] = p->size; /* int */
		iarg[3] = p->priority; /* int */
		*n_args = 4;
		break;
	}
	/* mach_macx_swapoff */
	case 49: {
		struct mach_macx_swapoff_args *p = params;
		uarg[0] = (intptr_t) p->name; /* char * */
		iarg[1] = p->flags; /* int */
		*n_args = 2;
		break;
	}
	/* mach_macx_triggers */
	case 51: {
		struct mach_macx_triggers_args *p = params;
		iarg[0] = p->hi_water; /* int */
		iarg[1] = p->low_water; /* int */
		iarg[2] = p->flags; /* int */
		iarg[3] = p->alert_port; /* mach_port_t */
		*n_args = 4;
		break;
	}
	/* mach_macx_backing_store_suspend */
	case 52: {
		struct mach_macx_backing_store_suspend_args *p = params;
		iarg[0] = p->suspend; /* int */
		*n_args = 1;
		break;
	}
	/* mach_macx_backing_store_recovery */
	case 53: {
		struct mach_macx_backing_store_recovery_args *p = params;
		iarg[0] = p->pid; /* int */
		*n_args = 1;
		break;
	}
	/* mach_swtch_pri */
	case 59: {
		struct mach_swtch_pri_args *p = params;
		iarg[0] = p->pri; /* int */
		*n_args = 1;
		break;
	}
	/* mach_swtch */
	case 60: {
		*n_args = 0;
		break;
	}
	/* mach_syscall_thread_switch */
	case 61: {
		struct mach_syscall_thread_switch_args *p = params;
		iarg[0] = p->thread_name; /* mach_port_name_t */
		iarg[1] = p->option; /* int */
		iarg[2] = p->option_time; /* mach_msg_timeout_t */
		*n_args = 3;
		break;
	}
	/* mach_clock_sleep_trap */
	case 62: {
		struct mach_clock_sleep_trap_args *p = params;
		iarg[0] = p->clock_name; /* mach_port_name_t */
		iarg[1] = p->sleep_type; /* mach_sleep_type_t */
		iarg[2] = p->sleep_sec; /* int */
		iarg[3] = p->sleep_nsec; /* int */
		uarg[4] = (intptr_t) p->wakeup_time; /* mach_timespec_t * */
		*n_args = 5;
		break;
	}
	/* mach_timebase_info */
	case 89: {
		struct mach_timebase_info_args *p = params;
		iarg[0] = p->info; /* mach_timebase_info_t */
		*n_args = 1;
		break;
	}
	/* mach_wait_until */
	case 90: {
		struct mach_wait_until_args *p = params;
		uarg[0] = p->deadline; /* uint64_t */
		*n_args = 1;
		break;
	}
	/* mach_timer_create */
	case 91: {
		*n_args = 0;
		break;
	}
	/* mach_timer_destroy */
	case 92: {
		struct mach_timer_destroy_args *p = params;
		iarg[0] = p->name; /* mach_port_name_t */
		*n_args = 1;
		break;
	}
	/* mach_timer_arm */
	case 93: {
		struct mach_timer_arm_args *p = params;
		iarg[0] = p->name; /* mach_port_name_t */
		iarg[1] = p->expire_time; /* mach_absolute_time_t */
		*n_args = 2;
		break;
	}
	/* mach_timer_cancel */
	case 94: {
		struct mach_timer_cancel_args *p = params;
		iarg[0] = p->name; /* mach_port_name_t */
		uarg[1] = (intptr_t) p->result_time; /* mach_absolute_time_t * */
		*n_args = 2;
		break;
	}
	/* mach_get_time_base_info */
	case 95: {
		*n_args = 0;
		break;
	}
	default:
		*n_args = 0;
		break;
	};
}
static void
systrace_entry_setargdesc(int sysnum, int ndx, char *desc, size_t descsz)
{
	const char *p = NULL;
	switch (sysnum) {
#if defined(_KERNEL_OPT)
#endif
	/* _kernelrpc_mach_vm_allocate_trap */
	case 10:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_vm_offset_t *";
			break;
		case 2:
			p = "mach_vm_size_t";
			break;
		case 3:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_vm_deallocate_trap */
	case 12:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_vm_offset_t *";
			break;
		case 2:
			p = "mach_vm_size_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_vm_protect_trap */
	case 14:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_vm_offset_t";
			break;
		case 2:
			p = "mach_vm_size_t";
			break;
		case 3:
			p = "int";
			break;
		case 4:
			p = "vm_prot_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_vm_map_trap */
	case 15:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_vm_offset_t *";
			break;
		case 2:
			p = "mach_vm_size_t";
			break;
		case 3:
			p = "mach_vm_offset_t";
			break;
		case 4:
			p = "int";
			break;
		case 5:
			p = "vm_prot_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_allocate_trap */
	case 16:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_right_t";
			break;
		case 2:
			p = "mach_port_name_t *";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_destroy_trap */
	case 17:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_deallocate_trap */
	case 18:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_mod_refs_trap */
	case 19:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_right_t";
			break;
		case 3:
			p = "mach_port_delta_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_move_member_trap */
	case 20:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_insert_right_trap */
	case 21:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_name_t";
			break;
		case 3:
			p = "mach_msg_type_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_insert_member_trap */
	case 22:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_extract_member_trap */
	case 23:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_construct_trap */
	case 24:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_options_t";
			break;
		case 2:
			p = "uint64_t";
			break;
		case 3:
			p = "mach_port_name_t *";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_destruct_trap */
	case 25:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "mach_port_delta_t";
			break;
		case 3:
			p = "uint64_t";
			break;
		default:
			break;
		};
		break;
	/* mach_reply_port */
	case 26:
		break;
	/* mach_thread_self_trap */
	case 27:
		break;
	/* mach_task_self_trap */
	case 28:
		break;
	/* mach_host_self_trap */
	case 29:
		break;
	/* mach_msg_trap */
	case 31:
		switch(ndx) {
		case 0:
			p = "mach_msg_header_t *";
			break;
		case 1:
			p = "mach_msg_option_t";
			break;
		case 2:
			p = "mach_msg_size_t";
			break;
		case 3:
			p = "mach_msg_size_t";
			break;
		case 4:
			p = "mach_port_name_t";
			break;
		case 5:
			p = "mach_msg_timeout_t";
			break;
		case 6:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_msg_overwrite_trap */
	case 32:
		switch(ndx) {
		case 0:
			p = "mach_msg_header_t *";
			break;
		case 1:
			p = "mach_msg_option_t";
			break;
		case 2:
			p = "mach_msg_size_t";
			break;
		case 3:
			p = "mach_msg_size_t";
			break;
		case 4:
			p = "mach_port_name_t";
			break;
		case 5:
			p = "mach_msg_timeout_t";
			break;
		case 6:
			p = "mach_port_name_t";
			break;
		case 7:
			p = "mach_msg_header_t *";
			break;
		case 8:
			p = "mach_msg_size_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_signal_trap */
	case 33:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_signal_all_trap */
	case 34:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_signal_thread_trap */
	case 35:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_wait_trap */
	case 36:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_wait_signal_trap */
	case 37:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_timedwait_trap */
	case 38:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "unsigned int";
			break;
		case 2:
			p = "mach_clock_res_t";
			break;
		default:
			break;
		};
		break;
	/* mach_semaphore_timedwait_signal_trap */
	case 39:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "unsigned int";
			break;
		case 3:
			p = "mach_clock_res_t";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_guard_trap */
	case 41:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "uint64_t";
			break;
		case 3:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* _kernelrpc_mach_port_unguard_trap */
	case 42:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_port_name_t";
			break;
		case 2:
			p = "uint64_t";
			break;
		default:
			break;
		};
		break;
	/* mach_map_fd */
	case 43:
		switch(ndx) {
		case 0:
			p = "int";
			break;
		case 1:
			p = "mach_vm_offset_t";
			break;
		case 2:
			p = "mach_vm_offset_t *";
			break;
		case 3:
			p = "mach_boolean_t";
			break;
		case 4:
			p = "mach_vm_size_t";
			break;
		default:
			break;
		};
		break;
	/* mach_task_name_for_pid */
	case 44:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "int";
			break;
		case 2:
			p = "mach_port_t *";
			break;
		default:
			break;
		};
		break;
	/* mach_task_for_pid */
	case 45:
		switch(ndx) {
		case 0:
			p = "mach_port_t";
			break;
		case 1:
			p = "int";
			break;
		case 2:
			p = "mach_port_t *";
			break;
		default:
			break;
		};
		break;
	/* mach_pid_for_task */
	case 46:
		switch(ndx) {
		case 0:
			p = "mach_port_t";
			break;
		case 1:
			p = "int *";
			break;
		default:
			break;
		};
		break;
	/* mach_macx_swapon */
	case 48:
		switch(ndx) {
		case 0:
			p = "char *";
			break;
		case 1:
			p = "int";
			break;
		case 2:
			p = "int";
			break;
		case 3:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* mach_macx_swapoff */
	case 49:
		switch(ndx) {
		case 0:
			p = "char *";
			break;
		case 1:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* mach_macx_triggers */
	case 51:
		switch(ndx) {
		case 0:
			p = "int";
			break;
		case 1:
			p = "int";
			break;
		case 2:
			p = "int";
			break;
		case 3:
			p = "mach_port_t";
			break;
		default:
			break;
		};
		break;
	/* mach_macx_backing_store_suspend */
	case 52:
		switch(ndx) {
		case 0:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* mach_macx_backing_store_recovery */
	case 53:
		switch(ndx) {
		case 0:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* mach_swtch_pri */
	case 59:
		switch(ndx) {
		case 0:
			p = "int";
			break;
		default:
			break;
		};
		break;
	/* mach_swtch */
	case 60:
		break;
	/* mach_syscall_thread_switch */
	case 61:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "int";
			break;
		case 2:
			p = "mach_msg_timeout_t";
			break;
		default:
			break;
		};
		break;
	/* mach_clock_sleep_trap */
	case 62:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_sleep_type_t";
			break;
		case 2:
			p = "int";
			break;
		case 3:
			p = "int";
			break;
		case 4:
			p = "mach_timespec_t *";
			break;
		default:
			break;
		};
		break;
	/* mach_timebase_info */
	case 89:
		switch(ndx) {
		case 0:
			p = "mach_timebase_info_t";
			break;
		default:
			break;
		};
		break;
	/* mach_wait_until */
	case 90:
		switch(ndx) {
		case 0:
			p = "uint64_t";
			break;
		default:
			break;
		};
		break;
	/* mach_timer_create */
	case 91:
		break;
	/* mach_timer_destroy */
	case 92:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		default:
			break;
		};
		break;
	/* mach_timer_arm */
	case 93:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_absolute_time_t";
			break;
		default:
			break;
		};
		break;
	/* mach_timer_cancel */
	case 94:
		switch(ndx) {
		case 0:
			p = "mach_port_name_t";
			break;
		case 1:
			p = "mach_absolute_time_t *";
			break;
		default:
			break;
		};
		break;
	/* mach_get_time_base_info */
	case 95:
		break;
	default:
		break;
	};
	if (p != NULL)
		strlcpy(desc, p, descsz);
}
static void
systrace_return_setargdesc(int sysnum, int ndx, char *desc, size_t descsz)
{
	const char *p = NULL;
	switch (sysnum) {
#if defined(_KERNEL_OPT)
#endif
	/* _kernelrpc_mach_vm_allocate_trap */
	case 10:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_vm_deallocate_trap */
	case 12:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_vm_protect_trap */
	case 14:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_vm_map_trap */
	case 15:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_allocate_trap */
	case 16:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_destroy_trap */
	case 17:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_deallocate_trap */
	case 18:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_mod_refs_trap */
	case 19:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_move_member_trap */
	case 20:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_insert_right_trap */
	case 21:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_insert_member_trap */
	case 22:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_extract_member_trap */
	case 23:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_construct_trap */
	case 24:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_destruct_trap */
	case 25:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_reply_port */
	case 26:
	/* mach_thread_self_trap */
	case 27:
	/* mach_task_self_trap */
	case 28:
	/* mach_host_self_trap */
	case 29:
	/* mach_msg_trap */
	case 31:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_msg_overwrite_trap */
	case 32:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_signal_trap */
	case 33:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_signal_all_trap */
	case 34:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_signal_thread_trap */
	case 35:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_wait_trap */
	case 36:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_wait_signal_trap */
	case 37:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_timedwait_trap */
	case 38:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_semaphore_timedwait_signal_trap */
	case 39:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_guard_trap */
	case 41:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* _kernelrpc_mach_port_unguard_trap */
	case 42:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_map_fd */
	case 43:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_task_name_for_pid */
	case 44:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_task_for_pid */
	case 45:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_pid_for_task */
	case 46:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_macx_swapon */
	case 48:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_macx_swapoff */
	case 49:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_macx_triggers */
	case 51:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_macx_backing_store_suspend */
	case 52:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_macx_backing_store_recovery */
	case 53:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_swtch_pri */
	case 59:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_swtch */
	case 60:
	/* mach_syscall_thread_switch */
	case 61:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_clock_sleep_trap */
	case 62:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_timebase_info */
	case 89:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_wait_until */
	case 90:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_timer_create */
	case 91:
	/* mach_timer_destroy */
	case 92:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_timer_arm */
	case 93:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_timer_cancel */
	case 94:
		if (ndx == 0 || ndx == 1)
			p = "int";
		break;
	/* mach_get_time_base_info */
	case 95:
	default:
		break;
	};
	if (p != NULL)
		strlcpy(desc, p, descsz);
}
