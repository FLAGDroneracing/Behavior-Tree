﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENT_PROPERTIES_H_
#define _BEHAVIAC_AGENT_PROPERTIES_H_

#include "behaviac_agent_headers.h"
#include "behaviac_agent_member_visitor.h"

namespace behaviac
{
	// ---------------------------------------------------------------------
	// Delegate methods
	// ---------------------------------------------------------------------

	inline void FunctionPointer_behaviac_Agent_LogMessage(char* param0) { behaviac::Agent::LogMessage(param0); }
	inline void FunctionPointer_Agent1_LogMessage(char* param0) { Agent1::LogMessage(param0); }
	inline void FunctionPointer_Agent1_ring1(Agent* self) { ((Agent1*)self)->ring1(); }
	inline void FunctionPointer_Agent1_ring10(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring10, void >(); }
	inline void FunctionPointer_Agent1_ring11(Agent* self) { ((Agent1*)self)->ring11(); }
	inline void FunctionPointer_Agent1_ring12(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring12, void >(); }
	inline void FunctionPointer_Agent1_ring13(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring13, void >(); }
	inline void FunctionPointer_Agent1_ring14(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring14, void >(); }
	inline void FunctionPointer_Agent1_ring15(Agent* self) { ((Agent1*)self)->ring15(); }
	inline void FunctionPointer_Agent1_ring2(Agent* self) { ((Agent1*)self)->ring2(); }
	inline void FunctionPointer_Agent1_ring3(Agent* self) { ((Agent1*)self)->ring3(); }
	inline void FunctionPointer_Agent1_ring8(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring8, void >(); }
	inline void FunctionPointer_Agent1_ring9(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_ring9, void >(); }
	inline void FunctionPointer_Agent1_takeoff(Agent* self) { ((Agent1*)self)->_Execute_Method_<METHOD_TYPE_Agent1_takeoff, void >(); }
}
#endif // _BEHAVIAC_AGENT_PROPERTIES_H_
