// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotifyState_RestrictUpperBodyAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotifyState_RestrictUpperBodyAnim() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSAnimNotifyState_RestrictUpperBodyAnim::StaticRegisterNativesUELSSAnimNotifyState_RestrictUpperBodyAnim()
	{
	}
	UClass* Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_NoRegister()
	{
		return UELSSAnimNotifyState_RestrictUpperBodyAnim::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetAimOffsetAngle_MetaData[];
#endif
		static void NewProp_ResetAimOffsetAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetAimOffsetAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSAnimNotifyStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotifyState_RestrictUpperBodyAnim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_RestrictUpperBodyAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimNotifyState_RestrictUpperBodyAnim" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyState_RestrictUpperBodyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle_SetBit(void* Obj)
	{
		((UELSSAnimNotifyState_RestrictUpperBodyAnim*)Obj)->ResetAimOffsetAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle = { "ResetAimOffsetAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimNotifyState_RestrictUpperBodyAnim), &Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::NewProp_ResetAimOffsetAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotifyState_RestrictUpperBodyAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::ClassParams = {
		&UELSSAnimNotifyState_RestrictUpperBodyAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotifyState_RestrictUpperBodyAnim, 4272511650);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotifyState_RestrictUpperBodyAnim>()
	{
		return UELSSAnimNotifyState_RestrictUpperBodyAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim(Z_Construct_UClass_UELSSAnimNotifyState_RestrictUpperBodyAnim, &UELSSAnimNotifyState_RestrictUpperBodyAnim::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotifyState_RestrictUpperBodyAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotifyState_RestrictUpperBodyAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
