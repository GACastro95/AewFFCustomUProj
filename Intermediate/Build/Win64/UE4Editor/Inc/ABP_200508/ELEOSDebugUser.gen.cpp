// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSDebugUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSDebugUser() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugUser_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugUser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
// End Cross Module References
	void AELEOSDebugUser::StaticRegisterNativesAELEOSDebugUser()
	{
	}
	UClass* Z_Construct_UClass_AELEOSDebugUser_NoRegister()
	{
		return AELEOSDebugUser::StaticClass();
	}
	struct Z_Construct_UClass_AELEOSDebugUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetup_MetaData[];
#endif
		static void NewProp_bSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceSanitizeText_MetaData[];
#endif
		static void NewProp_ForceSanitizeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceSanitizeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEOSDebugUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSDebugUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSDebugUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_EOSUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugUser" },
		{ "ModuleRelativePath", "Public/ELEOSDebugUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_EOSUser = { "EOSUser", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSDebugUser, EOSUser), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_EOSUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_EOSUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugUser" },
		{ "ModuleRelativePath", "Public/ELEOSDebugUser.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup_SetBit(void* Obj)
	{
		((AELEOSDebugUser*)Obj)->bSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup = { "bSetup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugUser), &Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugUser" },
		{ "ModuleRelativePath", "Public/ELEOSDebugUser.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((AELEOSDebugUser*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugUser), &Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugUser" },
		{ "ModuleRelativePath", "Public/ELEOSDebugUser.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText_SetBit(void* Obj)
	{
		((AELEOSDebugUser*)Obj)->ForceSanitizeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText = { "ForceSanitizeText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugUser), &Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEOSDebugUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_EOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugUser_Statics::NewProp_ForceSanitizeText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEOSDebugUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEOSDebugUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEOSDebugUser_Statics::ClassParams = {
		&AELEOSDebugUser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELEOSDebugUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEOSDebugUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEOSDebugUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEOSDebugUser, 4136953274);
	template<> ABP_200508_API UClass* StaticClass<AELEOSDebugUser>()
	{
		return AELEOSDebugUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEOSDebugUser(Z_Construct_UClass_AELEOSDebugUser, &AELEOSDebugUser::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEOSDebugUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEOSDebugUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
