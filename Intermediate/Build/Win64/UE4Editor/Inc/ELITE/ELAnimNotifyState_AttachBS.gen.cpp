// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAnimNotifyState_AttachBS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_AttachBS() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachBS_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_AttachBS();
	ELITE_API UClass* Z_Construct_UClass_UELAnimNotifyState_Attach();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELAnimNotifyState_AttachBS::StaticRegisterNativesUELAnimNotifyState_AttachBS()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachBS_NoRegister()
	{
		return UELAnimNotifyState_AttachBS::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyState_Attach,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_AttachBS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AttachBS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_AttachBS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::ClassParams = {
		&UELAnimNotifyState_AttachBS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_AttachBS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_AttachBS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_AttachBS, 4199145070);
	template<> ELITE_API UClass* StaticClass<UELAnimNotifyState_AttachBS>()
	{
		return UELAnimNotifyState_AttachBS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_AttachBS(Z_Construct_UClass_UELAnimNotifyState_AttachBS, &UELAnimNotifyState_AttachBS::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAnimNotifyState_AttachBS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_AttachBS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
