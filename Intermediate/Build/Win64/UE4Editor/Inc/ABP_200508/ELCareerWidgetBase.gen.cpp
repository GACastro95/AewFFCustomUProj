// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStateManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerWidgetBase::execClearBroadcastSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearBroadcastSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerWidgetBase::execGetWidgetAnimationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidgetAnimationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerWidgetBase::execInitBroadcastSetting)
	{
		P_GET_OBJECT(AELCareerStateManager,Z_Param_CareerStateManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBroadcastSetting(Z_Param_CareerStateManager);
		P_NATIVE_END;
	}
	void UELCareerWidgetBase::StaticRegisterNativesUELCareerWidgetBase()
	{
		UClass* Class = UELCareerWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearBroadcastSetting", &UELCareerWidgetBase::execClearBroadcastSetting },
			{ "GetWidgetAnimationSpeed", &UELCareerWidgetBase::execGetWidgetAnimationSpeed },
			{ "InitBroadcastSetting", &UELCareerWidgetBase::execInitBroadcastSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerWidgetBase, nullptr, "ClearBroadcastSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics
	{
		struct ELCareerWidgetBase_eventGetWidgetAnimationSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerWidgetBase_eventGetWidgetAnimationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerWidgetBase, nullptr, "GetWidgetAnimationSpeed", nullptr, nullptr, sizeof(ELCareerWidgetBase_eventGetWidgetAnimationSpeed_Parms), Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics
	{
		struct ELCareerWidgetBase_eventInitBroadcastSetting_Parms
		{
			AELCareerStateManager* CareerStateManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CareerStateManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::NewProp_CareerStateManager = { "CareerStateManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerWidgetBase_eventInitBroadcastSetting_Parms, CareerStateManager), Z_Construct_UClass_AELCareerStateManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::NewProp_CareerStateManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerWidgetBase, nullptr, "InitBroadcastSetting", nullptr, nullptr, sizeof(ELCareerWidgetBase_eventInitBroadcastSetting_Parms), Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerWidgetBase_NoRegister()
	{
		return UELCareerWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerWidgetBase_ClearBroadcastSetting, "ClearBroadcastSetting" }, // 3112154427
		{ &Z_Construct_UFunction_UELCareerWidgetBase_GetWidgetAnimationSpeed, "GetWidgetAnimationSpeed" }, // 1355832653
		{ &Z_Construct_UFunction_UELCareerWidgetBase_InitBroadcastSetting, "InitBroadcastSetting" }, // 4030553979
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerWidgetBase_Statics::ClassParams = {
		&UELCareerWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerWidgetBase, 3135203608);
	template<> ABP_200508_API UClass* StaticClass<UELCareerWidgetBase>()
	{
		return UELCareerWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerWidgetBase(Z_Construct_UClass_UELCareerWidgetBase, &UELCareerWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
