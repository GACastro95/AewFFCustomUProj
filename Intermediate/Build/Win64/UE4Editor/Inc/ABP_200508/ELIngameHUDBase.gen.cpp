// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELIngameHUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELIngameHUDBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameHUDBase();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELIngameHUDBase::StaticRegisterNativesUELIngameHUDBase()
	{
	}
	UClass* Z_Construct_UClass_UELIngameHUDBase_NoRegister()
	{
		return UELIngameHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_UELIngameHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPlayAnimation_MetaData[];
#endif
		static void NewProp_AutoPlayAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPlayAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRemoveFromParent_MetaData[];
#endif
		static void NewProp_AutoRemoveFromParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoRemoveFromParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELIngameHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELIngameHUDBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELIngameHUDBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDBase.h" },
	};
#endif
	void Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation_SetBit(void* Obj)
	{
		((UELIngameHUDBase*)Obj)->AutoPlayAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation = { "AutoPlayAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELIngameHUDBase), &Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELIngameHUDBase" },
		{ "ModuleRelativePath", "Public/ELIngameHUDBase.h" },
	};
#endif
	void Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent_SetBit(void* Obj)
	{
		((UELIngameHUDBase*)Obj)->AutoRemoveFromParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent = { "AutoRemoveFromParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELIngameHUDBase), &Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELIngameHUDBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoPlayAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELIngameHUDBase_Statics::NewProp_AutoRemoveFromParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELIngameHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELIngameHUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELIngameHUDBase_Statics::ClassParams = {
		&UELIngameHUDBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELIngameHUDBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELIngameHUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELIngameHUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELIngameHUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELIngameHUDBase, 4219326290);
	template<> ABP_200508_API UClass* StaticClass<UELIngameHUDBase>()
	{
		return UELIngameHUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELIngameHUDBase(Z_Construct_UClass_UELIngameHUDBase, &UELIngameHUDBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELIngameHUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELIngameHUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
