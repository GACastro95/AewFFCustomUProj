// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLevelTransitionEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLevelTransitionEvent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSLevelTransitionEvent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSLevelTransitionEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSLevelTransitionEvent::execOnChangeLevel)
	{
		P_GET_OBJECT(ULevel,Z_Param_inLevel);
		P_GET_OBJECT(UWorld,Z_Param_inWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeLevel(Z_Param_inLevel,Z_Param_inWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSLevelTransitionEvent::execOnDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSLevelTransitionEvent::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize();
		P_NATIVE_END;
	}
	void UELSSLevelTransitionEvent::StaticRegisterNativesUELSSLevelTransitionEvent()
	{
		UClass* Class = UELSSLevelTransitionEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnChangeLevel", &UELSSLevelTransitionEvent::execOnChangeLevel },
			{ "OnDestroy", &UELSSLevelTransitionEvent::execOnDestroy },
			{ "OnInitialize", &UELSSLevelTransitionEvent::execOnInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics
	{
		struct ELSSLevelTransitionEvent_eventOnChangeLevel_Parms
		{
			ULevel* inLevel;
			UWorld* inWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLevelTransitionEvent_eventOnChangeLevel_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::NewProp_inWorld = { "inWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLevelTransitionEvent_eventOnChangeLevel_Parms, inWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::NewProp_inLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::NewProp_inWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLevelTransitionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSLevelTransitionEvent, nullptr, "OnChangeLevel", nullptr, nullptr, sizeof(ELSSLevelTransitionEvent_eventOnChangeLevel_Parms), Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLevelTransitionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSLevelTransitionEvent, nullptr, "OnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLevelTransitionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSLevelTransitionEvent, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSLevelTransitionEvent_NoRegister()
	{
		return UELSSLevelTransitionEvent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSLevelTransitionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSLevelTransitionEvent_OnChangeLevel, "OnChangeLevel" }, // 573023640
		{ &Z_Construct_UFunction_UELSSLevelTransitionEvent_OnDestroy, "OnDestroy" }, // 3819983168
		{ &Z_Construct_UFunction_UELSSLevelTransitionEvent_OnInitialize, "OnInitialize" }, // 3415216901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSLevelTransitionEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSLevelTransitionEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSLevelTransitionEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::ClassParams = {
		&UELSSLevelTransitionEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSLevelTransitionEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSLevelTransitionEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSLevelTransitionEvent, 3539984492);
	template<> ABP_200508_API UClass* StaticClass<UELSSLevelTransitionEvent>()
	{
		return UELSSLevelTransitionEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSLevelTransitionEvent(Z_Construct_UClass_UELSSLevelTransitionEvent, &UELSSLevelTransitionEvent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSLevelTransitionEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSLevelTransitionEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
