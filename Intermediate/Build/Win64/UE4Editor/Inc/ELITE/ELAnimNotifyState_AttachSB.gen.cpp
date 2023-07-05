// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAnimNotifyState_AttachSB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_AttachSB() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachSB_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachSB();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_Attach();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELAnimNotifyState_AttachSB::StaticRegisterNativesUELAnimNotifyState_AttachSB()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachSB_NoRegister()
	{
		return UELAnimNotifyState_AttachSB::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyState_Attach,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_AttachSB.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AttachSB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_AttachSB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::ClassParams = {
		&UELAnimNotifyState_AttachSB::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachSB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_AttachSB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_AttachSB, 2434216975);
	template<> ELITE_API UClass* StaticClass<UELAnimNotifyState_AttachSB>()
	{
		return UELAnimNotifyState_AttachSB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_AttachSB(Z_Construct_UClass_UELAnimNotifyState_AttachSB, &UELAnimNotifyState_AttachSB::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAnimNotifyState_AttachSB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_AttachSB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
