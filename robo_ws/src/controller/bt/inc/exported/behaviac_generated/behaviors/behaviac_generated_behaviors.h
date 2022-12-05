﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_GENERATED_BEHAVIORS_H_
#define _BEHAVIAC_GENERATED_BEHAVIORS_H_

#include "../types/behaviac_types.h"

namespace behaviac
{
	// Source file: FirstBT

	class Action_bt_FirstBT_node15 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node15, Action);
		Action_bt_FirstBT_node15()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_takeoff, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node0 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node0, Action);
		Action_bt_FirstBT_node0()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->ring1();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node2, Action);
		Action_bt_FirstBT_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->ring2();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node7, Action);
		Action_bt_FirstBT_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->ring15();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node8 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node8, Action);
		Action_bt_FirstBT_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->ring11();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node9, Action);
		Action_bt_FirstBT_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring12, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node10, Action);
		Action_bt_FirstBT_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring13, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node11, Action);
		Action_bt_FirstBT_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring14, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node12, Action);
		Action_bt_FirstBT_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring8, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node13 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node13, Action);
		Action_bt_FirstBT_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring9, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_FirstBT_node14 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_FirstBT_node14, Action);
		Action_bt_FirstBT_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((Agent1*)pAgent)->_Execute_Method_<METHOD_TYPE_Agent1_ring10, void >();
			return BT_SUCCESS;
		}
	};

	class bt_FirstBT
	{
	public:
		static bool Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("FirstBT");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("Agent1");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("Agent1");
#endif
				pBT->AddChild(node1);
				{
					Sequence* node4 = BEHAVIAC_NEW Sequence;
					node4->SetClassNameString("Sequence");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("Agent1");
#endif
					node1->AddChild(node4);
					{
						Action_bt_FirstBT_node15* node15 = BEHAVIAC_NEW Action_bt_FirstBT_node15;
						node15->SetClassNameString("Action");
						node15->SetId(15);
#if !BEHAVIAC_RELEASE
						node15->SetAgentType("Agent1");
#endif
						node4->AddChild(node15);
						node4->SetHasEvents(node4->HasEvents() | node15->HasEvents());
					}
					{
						Action_bt_FirstBT_node0* node0 = BEHAVIAC_NEW Action_bt_FirstBT_node0;
						node0->SetClassNameString("Action");
						node0->SetId(0);
#if !BEHAVIAC_RELEASE
						node0->SetAgentType("Agent1");
#endif
						node4->AddChild(node0);
						node4->SetHasEvents(node4->HasEvents() | node0->HasEvents());
					}
					{
						Action_bt_FirstBT_node2* node2 = BEHAVIAC_NEW Action_bt_FirstBT_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("Agent1");
#endif
						node4->AddChild(node2);
						node4->SetHasEvents(node4->HasEvents() | node2->HasEvents());
					}
					{
						Action_bt_FirstBT_node7* node7 = BEHAVIAC_NEW Action_bt_FirstBT_node7;
						node7->SetClassNameString("Action");
						node7->SetId(7);
#if !BEHAVIAC_RELEASE
						node7->SetAgentType("Agent1");
#endif
						node4->AddChild(node7);
						node4->SetHasEvents(node4->HasEvents() | node7->HasEvents());
					}
					{
						Action_bt_FirstBT_node8* node8 = BEHAVIAC_NEW Action_bt_FirstBT_node8;
						node8->SetClassNameString("Action");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("Agent1");
#endif
						node4->AddChild(node8);
						node4->SetHasEvents(node4->HasEvents() | node8->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_FirstBT_node9* node9 = BEHAVIAC_NEW Action_bt_FirstBT_node9;
					node9->SetClassNameString("Action");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("Agent1");
#endif
					node1->AddChild(node9);
					node1->SetHasEvents(node1->HasEvents() | node9->HasEvents());
				}
				{
					Sequence* node6 = BEHAVIAC_NEW Sequence;
					node6->SetClassNameString("Sequence");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("Agent1");
#endif
					node1->AddChild(node6);
					{
						Action_bt_FirstBT_node10* node10 = BEHAVIAC_NEW Action_bt_FirstBT_node10;
						node10->SetClassNameString("Action");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("Agent1");
#endif
						node6->AddChild(node10);
						node6->SetHasEvents(node6->HasEvents() | node10->HasEvents());
					}
					{
						Action_bt_FirstBT_node11* node11 = BEHAVIAC_NEW Action_bt_FirstBT_node11;
						node11->SetClassNameString("Action");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("Agent1");
#endif
						node6->AddChild(node11);
						node6->SetHasEvents(node6->HasEvents() | node11->HasEvents());
					}
					{
						Action_bt_FirstBT_node12* node12 = BEHAVIAC_NEW Action_bt_FirstBT_node12;
						node12->SetClassNameString("Action");
						node12->SetId(12);
#if !BEHAVIAC_RELEASE
						node12->SetAgentType("Agent1");
#endif
						node6->AddChild(node12);
						node6->SetHasEvents(node6->HasEvents() | node12->HasEvents());
					}
					{
						Action_bt_FirstBT_node13* node13 = BEHAVIAC_NEW Action_bt_FirstBT_node13;
						node13->SetClassNameString("Action");
						node13->SetId(13);
#if !BEHAVIAC_RELEASE
						node13->SetAgentType("Agent1");
#endif
						node6->AddChild(node13);
						node6->SetHasEvents(node6->HasEvents() | node13->HasEvents());
					}
					{
						Action_bt_FirstBT_node14* node14 = BEHAVIAC_NEW Action_bt_FirstBT_node14;
						node14->SetClassNameString("Action");
						node14->SetId(14);
#if !BEHAVIAC_RELEASE
						node14->SetAgentType("Agent1");
#endif
						node6->AddChild(node14);
						node6->SetHasEvents(node6->HasEvents() | node14->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}
	};

}
#endif // _BEHAVIAC_GENERATED_BEHAVIORS_H_
