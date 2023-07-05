// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerPropBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerPropBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerPropBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerPropBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerProp();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_AELCareerPropBase_SetAnimInstanceClass = FName(TEXT("SetAnimInstanceClass"));
	void AELCareerPropBase::SetAnimInstanceClass(ECareerProp ePeop)
	{
		ELCareerPropBase_eventSetAnimInstanceClass_Parms Parms;
		Parms.ePeop=ePeop;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerPropBase_SetAnimInstanceClass),&Parms);
	}
	void AELCareerPropBase::StaticRegisterNativesAELCareerPropBase()
	{
	}
	struct Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePeop_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePeop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::NewProp_ePeop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::NewProp_ePeop = { "ePeop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPropBase_eventSetAnimInstanceClass_Parms, ePeop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::NewProp_ePeop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::NewProp_ePeop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerPropBase, nullptr, "SetAnimInstanceClass", nullptr, nullptr, sizeof(ELCareerPropBase_eventSetAnimInstanceClass_Parms), Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerPropBase_NoRegister()
	{
		return AELCareerPropBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerPropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerPropBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerPropBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerPropBase_SetAnimInstanceClass, "SetAnimInstanceClass" }, // 2094661740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerPropBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerPropBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerPropBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerPropBase_Statics::NewProp_m_pCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerPropBase" },
		{ "ModuleRelativePath", "Public/ELCareerPropBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerPropBase_Statics::NewProp_m_pCharacter = { "m_pCharacter", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerPropBase, m_pCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerPropBase_Statics::NewProp_m_pCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerPropBase_Statics::NewProp_m_pCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerPropBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerPropBase_Statics::NewProp_m_pCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerPropBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerPropBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerPropBase_Statics::ClassParams = {
		&AELCareerPropBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerPropBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerPropBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerPropBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerPropBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerPropBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerPropBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerPropBase, 721102422);
	template<> ABP_200508_API UClass* StaticClass<AELCareerPropBase>()
	{
		return AELCareerPropBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerPropBase(Z_Construct_UClass_AELCareerPropBase, &AELCareerPropBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerPropBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerPropBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
