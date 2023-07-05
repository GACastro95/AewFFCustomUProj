// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPauseMenuManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPauseMenuManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPauseMenuManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPauseMenuManagerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELPauseMenuManagerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELSSPauseMenuManagerBase::StaticRegisterNativesAELSSPauseMenuManagerBase()
	{
	}
	UClass* Z_Construct_UClass_AELSSPauseMenuManagerBase_NoRegister()
	{
		return AELSSPauseMenuManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusGame_MetaData[];
#endif
		static void NewProp_IsFocusGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELPauseMenuManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPauseMenuManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPauseMenuManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPauseMenuManagerBase" },
		{ "ModuleRelativePath", "Public/ELSSPauseMenuManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame_SetBit(void* Obj)
	{
		((AELSSPauseMenuManagerBase*)Obj)->IsFocusGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame = { "IsFocusGame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSPauseMenuManagerBase), &Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::NewProp_IsFocusGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSPauseMenuManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::ClassParams = {
		&AELSSPauseMenuManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSPauseMenuManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSPauseMenuManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSPauseMenuManagerBase, 3130277984);
	template<> ABP_200508_API UClass* StaticClass<AELSSPauseMenuManagerBase>()
	{
		return AELSSPauseMenuManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSPauseMenuManagerBase(Z_Construct_UClass_AELSSPauseMenuManagerBase, &AELSSPauseMenuManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSPauseMenuManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSPauseMenuManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
