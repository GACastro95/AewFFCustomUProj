// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EasyInstancedHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyInstancedHelper() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyInstancedHelper_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyInstancedHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyGameInstanceSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEasyInstancedHelper::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UEasyInstancedHelper_OnDeinitialize = FName(TEXT("OnDeinitialize"));
	void UEasyInstancedHelper::OnDeinitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEasyInstancedHelper_OnDeinitialize),NULL);
	}
	static FName NAME_UEasyInstancedHelper_OnInitialize = FName(TEXT("OnInitialize"));
	void UEasyInstancedHelper::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEasyInstancedHelper_OnInitialize),NULL);
	}
	static FName NAME_UEasyInstancedHelper_OnTick = FName(TEXT("OnTick"));
	void UEasyInstancedHelper::OnTick(float DeltaTime)
	{
		EasyInstancedHelper_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UEasyInstancedHelper_OnTick),&Parms);
	}
	void UEasyInstancedHelper::StaticRegisterNativesUEasyInstancedHelper()
	{
		UClass* Class = UEasyInstancedHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInitialize", &UEasyInstancedHelper::execOnInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyInstancedHelper, nullptr, "OnDeinitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyInstancedHelper, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyInstancedHelper_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyInstancedHelper, nullptr, "OnTick", nullptr, nullptr, sizeof(EasyInstancedHelper_eventOnTick_Parms), Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyInstancedHelper_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyInstancedHelper_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyInstancedHelper_NoRegister()
	{
		return UEasyInstancedHelper::StaticClass();
	}
	struct Z_Construct_UClass_UEasyInstancedHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegistToDefault_MetaData[];
#endif
		static void NewProp_bRegistToDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegistToDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTick_MetaData[];
#endif
		static void NewProp_bEnableTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableWhenPaused_MetaData[];
#endif
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerSubsystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyInstancedHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyInstancedHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyInstancedHelper_OnDeinitialize, "OnDeinitialize" }, // 2629939484
		{ &Z_Construct_UFunction_UEasyInstancedHelper_OnInitialize, "OnInitialize" }, // 3112231136
		{ &Z_Construct_UFunction_UEasyInstancedHelper_OnTick, "OnTick" }, // 3919320234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyInstancedHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EasyInstancedHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyInstancedHelper" },
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	void Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault_SetBit(void* Obj)
	{
		((UEasyInstancedHelper*)Obj)->bRegistToDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault = { "bRegistToDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEasyInstancedHelper), &Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyInstancedHelper" },
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	void Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick_SetBit(void* Obj)
	{
		((UEasyInstancedHelper*)Obj)->bEnableTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick = { "bEnableTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEasyInstancedHelper), &Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyInstancedHelper" },
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	void Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((UEasyInstancedHelper*)Obj)->bTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEasyInstancedHelper), &Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_OwnerSubsystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyInstancedHelper" },
		{ "ModuleRelativePath", "Public/EasyInstancedHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_OwnerSubsystem = { "OwnerSubsystem", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEasyInstancedHelper, OwnerSubsystem), Z_Construct_UClass_UEasyGameInstanceSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_OwnerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_OwnerSubsystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyInstancedHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bRegistToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bEnableTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_bTickableWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyInstancedHelper_Statics::NewProp_OwnerSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyInstancedHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyInstancedHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyInstancedHelper_Statics::ClassParams = {
		&UEasyInstancedHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEasyInstancedHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::PropPointers),
		0,
		0x001000A3u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyInstancedHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyInstancedHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyInstancedHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyInstancedHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyInstancedHelper, 64569251);
	template<> ELITE_CORE_API UClass* StaticClass<UEasyInstancedHelper>()
	{
		return UEasyInstancedHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyInstancedHelper(Z_Construct_UClass_UEasyInstancedHelper, &UEasyInstancedHelper::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UEasyInstancedHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyInstancedHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
