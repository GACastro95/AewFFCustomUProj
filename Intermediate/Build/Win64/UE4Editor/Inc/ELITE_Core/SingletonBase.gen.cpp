// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/SingletonBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonBase() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType();
// End Cross Module References
	DEFINE_FUNCTION(USingletonBase::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USingletonBase::execGetInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USingletonBase**)Z_Param__Result=USingletonBase::GetInstance(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USingletonBase::execSetWorldContextObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldContextObject(Z_Param_Object);
		P_NATIVE_END;
	}
	static FName NAME_USingletonBase_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
	void USingletonBase::ReceiveInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_USingletonBase_ReceiveInitialize),NULL);
	}
	static FName NAME_USingletonBase_ReceivePostTick = FName(TEXT("ReceivePostTick"));
	void USingletonBase::ReceivePostTick(float DeltaSeconds)
	{
		SingletonBase_eventReceivePostTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USingletonBase_ReceivePostTick),&Parms);
	}
	static FName NAME_USingletonBase_ReceivePreTick = FName(TEXT("ReceivePreTick"));
	void USingletonBase::ReceivePreTick(float DeltaSeconds)
	{
		SingletonBase_eventReceivePreTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USingletonBase_ReceivePreTick),&Parms);
	}
	static FName NAME_USingletonBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void USingletonBase::ReceiveTick(float DeltaSeconds)
	{
		SingletonBase_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USingletonBase_ReceiveTick),&Parms);
	}
	void USingletonBase::StaticRegisterNativesUSingletonBase()
	{
		UClass* Class = USingletonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &USingletonBase::execDestroy },
			{ "GetInstance", &USingletonBase::execGetInstance },
			{ "SetWorldContextObject", &USingletonBase::execSetWorldContextObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USingletonBase_Destroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_GetInstance_Statics
	{
		struct SingletonBase_eventGetInstance_Parms
		{
			TSubclassOf<USingletonBase>  Class;
			USingletonBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USingletonBase_GetInstance_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventGetInstance_Parms, Class), Z_Construct_UClass_USingletonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USingletonBase_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_USingletonBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USingletonBase_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_GetInstance_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "GetInstance", nullptr, nullptr, sizeof(SingletonBase_eventGetInstance_Parms), Z_Construct_UFunction_USingletonBase_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "ReceiveInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_ReceiveInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_ReceiveInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventReceivePostTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "ReceivePostTick", nullptr, nullptr, sizeof(SingletonBase_eventReceivePostTick_Parms), Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_ReceivePostTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_ReceivePostTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventReceivePreTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "ReceivePreTick", nullptr, nullptr, sizeof(SingletonBase_eventReceivePreTick_Parms), Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_ReceivePreTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_ReceivePreTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(SingletonBase_eventReceiveTick_Parms), Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics
	{
		struct SingletonBase_eventSetWorldContextObject_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingletonBase_eventSetWorldContextObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USingletonBase, nullptr, "SetWorldContextObject", nullptr, nullptr, sizeof(SingletonBase_eventSetWorldContextObject_Parms), Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USingletonBase_SetWorldContextObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USingletonBase_SetWorldContextObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USingletonBase_NoRegister()
	{
		return USingletonBase::StaticClass();
	}
	struct Z_Construct_UClass_USingletonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableWhenPaused_MetaData[];
#endif
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableInEditor_MetaData[];
#endif
		static void NewProp_bTickableInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableInEditor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaunchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LaunchType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingletonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USingletonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USingletonBase_Destroy, "Destroy" }, // 856089487
		{ &Z_Construct_UFunction_USingletonBase_GetInstance, "GetInstance" }, // 2096882589
		{ &Z_Construct_UFunction_USingletonBase_ReceiveInitialize, "ReceiveInitialize" }, // 2484809643
		{ &Z_Construct_UFunction_USingletonBase_ReceivePostTick, "ReceivePostTick" }, // 710246838
		{ &Z_Construct_UFunction_USingletonBase_ReceivePreTick, "ReceivePreTick" }, // 1790696394
		{ &Z_Construct_UFunction_USingletonBase_ReceiveTick, "ReceiveTick" }, // 3027272364
		{ &Z_Construct_UFunction_USingletonBase_SetWorldContextObject, "SetWorldContextObject" }, // 4217667883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingletonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SingletonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SingletonBase" },
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	void Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((USingletonBase*)Obj)->bTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USingletonBase), &Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SingletonBase" },
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	void Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor_SetBit(void* Obj)
	{
		((USingletonBase*)Obj)->bTickableInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor = { "bTickableInEditor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USingletonBase), &Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SingletonBase" },
		{ "ModuleRelativePath", "Public/SingletonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType = { "LaunchType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USingletonBase, LaunchType), Z_Construct_UEnum_ELITE_Core_ESingletonLaunchType, METADATA_PARAMS(Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingletonBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingletonBase_Statics::NewProp_bTickableInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingletonBase_Statics::NewProp_LaunchType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingletonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingletonBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingletonBase_Statics::ClassParams = {
		&USingletonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USingletonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USingletonBase_Statics::PropPointers),
		0,
		0x001002A1u,
		METADATA_PARAMS(Z_Construct_UClass_USingletonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingletonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingletonBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingletonBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingletonBase, 671114540);
	template<> ELITE_CORE_API UClass* StaticClass<USingletonBase>()
	{
		return USingletonBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingletonBase(Z_Construct_UClass_USingletonBase, &USingletonBase::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("USingletonBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingletonBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
