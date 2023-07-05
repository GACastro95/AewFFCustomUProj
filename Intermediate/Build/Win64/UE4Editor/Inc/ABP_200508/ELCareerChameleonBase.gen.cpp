// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerChameleonBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerChameleonBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerChameleonBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerChameleonBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScreenEffect();
// End Cross Module References
	static FName NAME_AELCareerChameleonBase_EnableEffect = FName(TEXT("EnableEffect"));
	void AELCareerChameleonBase::EnableEffect(ECareerScreenEffect eScreenEfffect)
	{
		ELCareerChameleonBase_eventEnableEffect_Parms Parms;
		Parms.eScreenEfffect=eScreenEfffect;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerChameleonBase_EnableEffect),&Parms);
	}
	void AELCareerChameleonBase::StaticRegisterNativesAELCareerChameleonBase()
	{
	}
	struct Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eScreenEfffect_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eScreenEfffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::NewProp_eScreenEfffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::NewProp_eScreenEfffect = { "eScreenEfffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerChameleonBase_eventEnableEffect_Parms, eScreenEfffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::NewProp_eScreenEfffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::NewProp_eScreenEfffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerChameleonBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerChameleonBase, nullptr, "EnableEffect", nullptr, nullptr, sizeof(ELCareerChameleonBase_eventEnableEffect_Parms), Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerChameleonBase_NoRegister()
	{
		return AELCareerChameleonBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerChameleonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerChameleonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerChameleonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerChameleonBase_EnableEffect, "EnableEffect" }, // 2041235621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerChameleonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerChameleonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerChameleonBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerChameleonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerChameleonBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerChameleonBase_Statics::ClassParams = {
		&AELCareerChameleonBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerChameleonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerChameleonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerChameleonBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerChameleonBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerChameleonBase, 1493765084);
	template<> ABP_200508_API UClass* StaticClass<AELCareerChameleonBase>()
	{
		return AELCareerChameleonBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerChameleonBase(Z_Construct_UClass_AELCareerChameleonBase, &AELCareerChameleonBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerChameleonBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerChameleonBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
