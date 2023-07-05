// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAsyncTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAsyncTask() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTask_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAsyncTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSResForSwitch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSDoWorkEvent__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAsyncTaskDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAsyncTask::execCreateAndRanLoopTask)
	{
		P_GET_ENUM_REF(EEOSResForSwitch,Z_Param_Out_EEOSResForSwitch);
		P_GET_OBJECT(UObject,Z_Param__pcObject);
		P_GET_UBOOL(Z_Param__bSynchronous);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__cEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAsyncTask**)Z_Param__Result=UEOSAsyncTask::CreateAndRanLoopTask((EEOSResForSwitch&)(Z_Param_Out_EEOSResForSwitch),Z_Param__pcObject,Z_Param__bSynchronous,FEOSDoWorkEvent(Z_Param__cEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execCreateAndRanTask)
	{
		P_GET_ENUM_REF(EEOSResForSwitch,Z_Param_Out_EEOSResForSwitch);
		P_GET_OBJECT(UObject,Z_Param__pcObject);
		P_GET_UBOOL(Z_Param__bSynchronous);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__cEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAsyncTask**)Z_Param__Result=UEOSAsyncTask::CreateAndRanTask((EEOSResForSwitch&)(Z_Param_Out_EEOSResForSwitch),Z_Param__pcObject,Z_Param__bSynchronous,FEOSDoWorkEvent(Z_Param__cEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execCreateTask)
	{
		P_GET_OBJECT(UObject,Z_Param__pcObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAsyncTask**)Z_Param__Result=UEOSAsyncTask::CreateTask(Z_Param__pcObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execIsEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execSetPause)
	{
		P_GET_UBOOL(Z_Param__bPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPause(Z_Param__bPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execStart)
	{
		P_GET_UBOOL(Z_Param__bLoopThread);
		P_GET_UBOOL(Z_Param__bSynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start(Z_Param__bLoopThread,Z_Param__bSynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execTryLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryLock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAsyncTask::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock();
		P_NATIVE_END;
	}
	void UEOSAsyncTask::StaticRegisterNativesUEOSAsyncTask()
	{
		UClass* Class = UEOSAsyncTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndRanLoopTask", &UEOSAsyncTask::execCreateAndRanLoopTask },
			{ "CreateAndRanTask", &UEOSAsyncTask::execCreateAndRanTask },
			{ "CreateTask", &UEOSAsyncTask::execCreateTask },
			{ "IsEnd", &UEOSAsyncTask::execIsEnd },
			{ "IsRunning", &UEOSAsyncTask::execIsRunning },
			{ "Lock", &UEOSAsyncTask::execLock },
			{ "SetPause", &UEOSAsyncTask::execSetPause },
			{ "Start", &UEOSAsyncTask::execStart },
			{ "Stop", &UEOSAsyncTask::execStop },
			{ "TryLock", &UEOSAsyncTask::execTryLock },
			{ "Unlock", &UEOSAsyncTask::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics
	{
		struct EOSAsyncTask_eventCreateAndRanLoopTask_Parms
		{
			EEOSResForSwitch EEOSResForSwitch;
			UObject* _pcObject;
			bool _bSynchronous;
			FScriptDelegate _cEvent;
			UEOSAsyncTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EEOSResForSwitch_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EEOSResForSwitch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcObject;
		static void NewProp__bSynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSynchronous;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__cEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_EEOSResForSwitch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_EEOSResForSwitch = { "EEOSResForSwitch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanLoopTask_Parms, EEOSResForSwitch), Z_Construct_UEnum_yEOSSDK_EEOSResForSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__pcObject = { "_pcObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanLoopTask_Parms, _pcObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__bSynchronous_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventCreateAndRanLoopTask_Parms*)Obj)->_bSynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__bSynchronous = { "_bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventCreateAndRanLoopTask_Parms), &Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__cEvent = { "_cEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanLoopTask_Parms, _cEvent), Z_Construct_UDelegateFunction_yEOSSDK_EOSDoWorkEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanLoopTask_Parms, ReturnValue), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_EEOSResForSwitch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_EEOSResForSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__pcObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__bSynchronous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp__cEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "CreateAndRanLoopTask", nullptr, nullptr, sizeof(EOSAsyncTask_eventCreateAndRanLoopTask_Parms), Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics
	{
		struct EOSAsyncTask_eventCreateAndRanTask_Parms
		{
			EEOSResForSwitch EEOSResForSwitch;
			UObject* _pcObject;
			bool _bSynchronous;
			FScriptDelegate _cEvent;
			UEOSAsyncTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EEOSResForSwitch_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EEOSResForSwitch;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcObject;
		static void NewProp__bSynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSynchronous;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__cEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_EEOSResForSwitch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_EEOSResForSwitch = { "EEOSResForSwitch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanTask_Parms, EEOSResForSwitch), Z_Construct_UEnum_yEOSSDK_EEOSResForSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__pcObject = { "_pcObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanTask_Parms, _pcObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__bSynchronous_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventCreateAndRanTask_Parms*)Obj)->_bSynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__bSynchronous = { "_bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventCreateAndRanTask_Parms), &Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__cEvent = { "_cEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanTask_Parms, _cEvent), Z_Construct_UDelegateFunction_yEOSSDK_EOSDoWorkEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateAndRanTask_Parms, ReturnValue), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_EEOSResForSwitch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_EEOSResForSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__pcObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__bSynchronous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp__cEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "CreateAndRanTask", nullptr, nullptr, sizeof(EOSAsyncTask_eventCreateAndRanTask_Parms), Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics
	{
		struct EOSAsyncTask_eventCreateTask_Parms
		{
			UObject* _pcObject;
			UEOSAsyncTask* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::NewProp__pcObject = { "_pcObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateTask_Parms, _pcObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAsyncTask_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UEOSAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::NewProp__pcObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "CreateTask", nullptr, nullptr, sizeof(EOSAsyncTask_eventCreateTask_Parms), Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_CreateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_CreateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics
	{
		struct EOSAsyncTask_eventIsEnd_Parms
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
	void Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventIsEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventIsEnd_Parms), &Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "IsEnd", nullptr, nullptr, sizeof(EOSAsyncTask_eventIsEnd_Parms), Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_IsEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_IsEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics
	{
		struct EOSAsyncTask_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventIsRunning_Parms), &Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "IsRunning", nullptr, nullptr, sizeof(EOSAsyncTask_eventIsRunning_Parms), Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics
	{
		struct EOSAsyncTask_eventSetPause_Parms
		{
			bool _bPaused;
		};
		static void NewProp__bPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::NewProp__bPaused_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventSetPause_Parms*)Obj)->_bPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::NewProp__bPaused = { "_bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventSetPause_Parms), &Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::NewProp__bPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::NewProp__bPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "SetPause", nullptr, nullptr, sizeof(EOSAsyncTask_eventSetPause_Parms), Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_SetPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_SetPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_Start_Statics
	{
		struct EOSAsyncTask_eventStart_Parms
		{
			bool _bLoopThread;
			bool _bSynchronous;
			bool ReturnValue;
		};
		static void NewProp__bLoopThread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bLoopThread;
		static void NewProp__bSynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSynchronous;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bLoopThread_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventStart_Parms*)Obj)->_bLoopThread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bLoopThread = { "_bLoopThread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventStart_Parms), &Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bLoopThread_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bSynchronous_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventStart_Parms*)Obj)->_bSynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bSynchronous = { "_bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventStart_Parms), &Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventStart_Parms), &Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bLoopThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp__bSynchronous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "Start", nullptr, nullptr, sizeof(EOSAsyncTask_eventStart_Parms), Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics
	{
		struct EOSAsyncTask_eventStop_Parms
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
	void Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventStop_Parms), &Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "Stop", nullptr, nullptr, sizeof(EOSAsyncTask_eventStop_Parms), Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics
	{
		struct EOSAsyncTask_eventTryLock_Parms
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
	void Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAsyncTask_eventTryLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAsyncTask_eventTryLock_Parms), &Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "TryLock", nullptr, nullptr, sizeof(EOSAsyncTask_eventTryLock_Parms), Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_TryLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_TryLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAsyncTask, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAsyncTask_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAsyncTask_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAsyncTask_NoRegister()
	{
		return UEOSAsyncTask::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAsyncTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AsyncTaskDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAsyncTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAsyncTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanLoopTask, "CreateAndRanLoopTask" }, // 2410152771
		{ &Z_Construct_UFunction_UEOSAsyncTask_CreateAndRanTask, "CreateAndRanTask" }, // 3336522781
		{ &Z_Construct_UFunction_UEOSAsyncTask_CreateTask, "CreateTask" }, // 427142040
		{ &Z_Construct_UFunction_UEOSAsyncTask_IsEnd, "IsEnd" }, // 3079676511
		{ &Z_Construct_UFunction_UEOSAsyncTask_IsRunning, "IsRunning" }, // 1170500851
		{ &Z_Construct_UFunction_UEOSAsyncTask_Lock, "Lock" }, // 2029961955
		{ &Z_Construct_UFunction_UEOSAsyncTask_SetPause, "SetPause" }, // 1694609093
		{ &Z_Construct_UFunction_UEOSAsyncTask_Start, "Start" }, // 2774257789
		{ &Z_Construct_UFunction_UEOSAsyncTask_Stop, "Stop" }, // 1973018215
		{ &Z_Construct_UFunction_UEOSAsyncTask_TryLock, "TryLock" }, // 1854445881
		{ &Z_Construct_UFunction_UEOSAsyncTask_Unlock, "Unlock" }, // 1567255589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAsyncTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_AsyncTaskDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAsyncTask" },
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_AsyncTaskDispatcher = { "AsyncTaskDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAsyncTask, AsyncTaskDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAsyncTaskDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_AsyncTaskDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_AsyncTaskDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_m_pcUserObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAsyncTask" },
		{ "ModuleRelativePath", "Public/EOSAsyncTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_m_pcUserObject = { "m_pcUserObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAsyncTask, m_pcUserObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_m_pcUserObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_m_pcUserObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAsyncTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_AsyncTaskDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAsyncTask_Statics::NewProp_m_pcUserObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAsyncTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAsyncTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAsyncTask_Statics::ClassParams = {
		&UEOSAsyncTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAsyncTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTask_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAsyncTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAsyncTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAsyncTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAsyncTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAsyncTask, 1184304323);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAsyncTask>()
	{
		return UEOSAsyncTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAsyncTask(Z_Construct_UClass_UEOSAsyncTask, &UEOSAsyncTask::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAsyncTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAsyncTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
