// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ActionWaitPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionWaitPlayerState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UActionWaitPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UActionWaitPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESessionPlayerStateType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSSessionEventResult();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedSetAndWaitPlayerState__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UActionWaitPlayerState::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitPlayerState::execActionWaitPlayerState)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_ENUM(ESessionPlayerStateNameType,Z_Param_NewStateName);
		P_GET_ENUM(ESessionPlayerStateType,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_NewBSetState);
		P_GET_UBOOL(Z_Param_bAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionWaitPlayerState**)Z_Param__Result=UActionWaitPlayerState::ActionWaitPlayerState(Z_Param_NewWorldContextObject,ESessionPlayerStateNameType(Z_Param_NewStateName),ESessionPlayerStateType(Z_Param_NewState),Z_Param_NewBSetState,Z_Param_bAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitPlayerState::execCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Completed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitPlayerState::execIsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionWaitPlayerState::execOnSessionEvent)
	{
		P_GET_ENUM(EELEOSSessionEventType,Z_Param_EventType);
		P_GET_ENUM(EELEOSSessionEventResult,Z_Param_EventResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionEvent(EELEOSSessionEventType(Z_Param_EventType),EELEOSSessionEventResult(Z_Param_EventResult));
		P_NATIVE_END;
	}
	void UActionWaitPlayerState::StaticRegisterNativesUActionWaitPlayerState()
	{
		UClass* Class = UActionWaitPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UActionWaitPlayerState::execAbort },
			{ "ActionWaitPlayerState", &UActionWaitPlayerState::execActionWaitPlayerState },
			{ "Completed", &UActionWaitPlayerState::execCompleted },
			{ "IsCompleted", &UActionWaitPlayerState::execIsCompleted },
			{ "OnSessionEvent", &UActionWaitPlayerState::execOnSessionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitPlayerState, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitPlayerState_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitPlayerState_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics
	{
		struct ActionWaitPlayerState_eventActionWaitPlayerState_Parms
		{
			UObject* NewWorldContextObject;
			ESessionPlayerStateNameType NewStateName;
			ESessionPlayerStateType NewState;
			bool NewBSetState;
			bool bAll;
			UActionWaitPlayerState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStateName_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStateName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_NewBSetState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBSetState;
		static void NewProp_bAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAll;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventActionWaitPlayerState_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewStateName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewStateName = { "NewStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventActionWaitPlayerState_Parms, NewStateName), Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventActionWaitPlayerState_Parms, NewState), Z_Construct_UEnum_ABP_200508_ESessionPlayerStateType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewBSetState_SetBit(void* Obj)
	{
		((ActionWaitPlayerState_eventActionWaitPlayerState_Parms*)Obj)->NewBSetState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewBSetState = { "NewBSetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionWaitPlayerState_eventActionWaitPlayerState_Parms), &Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewBSetState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_bAll_SetBit(void* Obj)
	{
		((ActionWaitPlayerState_eventActionWaitPlayerState_Parms*)Obj)->bAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_bAll = { "bAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionWaitPlayerState_eventActionWaitPlayerState_Parms), &Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_bAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventActionWaitPlayerState_Parms, ReturnValue), Z_Construct_UClass_UActionWaitPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewStateName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_NewBSetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_bAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitPlayerState, nullptr, "ActionWaitPlayerState", nullptr, nullptr, sizeof(ActionWaitPlayerState_eventActionWaitPlayerState_Parms), Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitPlayerState, nullptr, "Completed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitPlayerState_Completed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitPlayerState_Completed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics
	{
		struct ActionWaitPlayerState_eventIsCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionWaitPlayerState_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionWaitPlayerState_eventIsCompleted_Parms), &Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitPlayerState, nullptr, "IsCompleted", nullptr, nullptr, sizeof(ActionWaitPlayerState_eventIsCompleted_Parms), Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics
	{
		struct ActionWaitPlayerState_eventOnSessionEvent_Parms
		{
			EELEOSSessionEventType EventType;
			EELEOSSessionEventResult EventResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventOnSessionEvent_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSSessionEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventResult = { "EventResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionWaitPlayerState_eventOnSessionEvent_Parms, EventResult), Z_Construct_UEnum_ABP_200508_EELEOSSessionEventResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::NewProp_EventResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionWaitPlayerState, nullptr, "OnSessionEvent", nullptr, nullptr, sizeof(ActionWaitPlayerState_eventOnSessionEvent_Parms), Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionWaitPlayerState_NoRegister()
	{
		return UActionWaitPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_UActionWaitPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllMatched_MetaData[];
#endif
		static void NewProp_bAllMatched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllMatched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetState_MetaData[];
#endif
		static void NewProp_bSetState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[];
#endif
		static void NewProp_bCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionWaitPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionWaitPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionWaitPlayerState_Abort, "Abort" }, // 3133763719
		{ &Z_Construct_UFunction_UActionWaitPlayerState_ActionWaitPlayerState, "ActionWaitPlayerState" }, // 3152419152
		{ &Z_Construct_UFunction_UActionWaitPlayerState_Completed, "Completed" }, // 3312246952
		{ &Z_Construct_UFunction_UActionWaitPlayerState_IsCompleted, "IsCompleted" }, // 3388227264
		{ &Z_Construct_UFunction_UActionWaitPlayerState_OnSessionEvent, "OnSessionEvent" }, // 353914488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionWaitPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitPlayerState, OnCompleted), Z_Construct_UDelegateFunction_ABP_200508_AsyncCompletedSetAndWaitPlayerState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitPlayerState, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitPlayerState, StateName), Z_Construct_UEnum_ABP_200508_ESessionPlayerStateNameType, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionWaitPlayerState, State), Z_Construct_UEnum_ABP_200508_ESessionPlayerStateType, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched_SetBit(void* Obj)
	{
		((UActionWaitPlayerState*)Obj)->bAllMatched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched = { "bAllMatched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionWaitPlayerState), &Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState_SetBit(void* Obj)
	{
		((UActionWaitPlayerState*)Obj)->bSetState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState = { "bSetState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionWaitPlayerState), &Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionWaitPlayerState" },
		{ "ModuleRelativePath", "Public/ActionWaitPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted_SetBit(void* Obj)
	{
		((UActionWaitPlayerState*)Obj)->bCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionWaitPlayerState), &Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionWaitPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bAllMatched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bSetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionWaitPlayerState_Statics::NewProp_bCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionWaitPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionWaitPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionWaitPlayerState_Statics::ClassParams = {
		&UActionWaitPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionWaitPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionWaitPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionWaitPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionWaitPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionWaitPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionWaitPlayerState, 3716410368);
	template<> ABP_200508_API UClass* StaticClass<UActionWaitPlayerState>()
	{
		return UActionWaitPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionWaitPlayerState(Z_Construct_UClass_UActionWaitPlayerState, &UActionWaitPlayerState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UActionWaitPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionWaitPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
