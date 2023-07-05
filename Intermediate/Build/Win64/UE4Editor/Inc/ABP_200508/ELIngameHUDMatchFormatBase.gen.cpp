// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELIngameHUDMatchFormatBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELIngameHUDMatchFormatBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDMatchFormatBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDMatchFormatBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELIngameHUDMatchFormatBase::execAddMomentumMeterHUD)
	{
		P_GET_OBJECT(UELIngameHUDHPGaugeBase,Z_Param_HUD1);
		P_GET_OBJECT(UELIngameHUDHPGaugeBase,Z_Param_HUD2);
		P_GET_OBJECT(UELIngameHUDHPGaugeBase,Z_Param_HUD3);
		P_GET_OBJECT(UELIngameHUDHPGaugeBase,Z_Param_HUD4);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMomentumMeterHUD(Z_Param_HUD1,Z_Param_HUD2,Z_Param_HUD3,Z_Param_HUD4);
		P_NATIVE_END;
	}
	void UELIngameHUDMatchFormatBase::StaticRegisterNativesUELIngameHUDMatchFormatBase()
	{
		UClass* Class = UELIngameHUDMatchFormatBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMomentumMeterHUD", &UELIngameHUDMatchFormatBase::execAddMomentumMeterHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics
	{
		struct ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms
		{
			UELIngameHUDHPGaugeBase* HUD1;
			UELIngameHUDHPGaugeBase* HUD2;
			UELIngameHUDHPGaugeBase* HUD3;
			UELIngameHUDHPGaugeBase* HUD4;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD1 = { "HUD1", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms, HUD1), Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD2 = { "HUD2", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms, HUD2), Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD3_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD3 = { "HUD3", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms, HUD3), Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD4_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD4 = { "HUD4", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms, HUD4), Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::NewProp_HUD4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameHUDMatchFormatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameHUDMatchFormatBase, nullptr, "AddMomentumMeterHUD", nullptr, nullptr, sizeof(ELIngameHUDMatchFormatBase_eventAddMomentumMeterHUD_Parms), Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELIngameHUDMatchFormatBase_NoRegister()
	{
		return UELIngameHUDMatchFormatBase::StaticClass();
	}
	struct Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HUDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELIngameHUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELIngameHUDMatchFormatBase_AddMomentumMeterHUD, "AddMomentumMeterHUD" }, // 776737727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELIngameHUDMatchFormatBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDMatchFormatBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDMatchFormatBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDMatchFormatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_Inner = { "HUDs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELIngameHUDHPGaugeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDMatchFormatBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDMatchFormatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs = { "HUDs", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELIngameHUDMatchFormatBase, HUDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::NewProp_HUDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELIngameHUDMatchFormatBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::ClassParams = {
		&UELIngameHUDMatchFormatBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELIngameHUDMatchFormatBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELIngameHUDMatchFormatBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELIngameHUDMatchFormatBase, 3664533206);
	template<> ABP_200508_API UClass* StaticClass<UELIngameHUDMatchFormatBase>()
	{
		return UELIngameHUDMatchFormatBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELIngameHUDMatchFormatBase(Z_Construct_UClass_UELIngameHUDMatchFormatBase, &UELIngameHUDMatchFormatBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELIngameHUDMatchFormatBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELIngameHUDMatchFormatBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
