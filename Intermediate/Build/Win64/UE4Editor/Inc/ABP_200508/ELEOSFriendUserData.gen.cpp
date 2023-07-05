// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSFriendUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSFriendUserData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSFriendUserData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSFriendUserData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELEOSFriendUserData::StaticRegisterNativesUELEOSFriendUserData()
	{
	}
	UClass* Z_Construct_UClass_UELEOSFriendUserData_NoRegister()
	{
		return UELEOSFriendUserData::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSFriendUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIconIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIconIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerIconIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSFriendUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriendUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSFriendUserData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSFriendUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs_Inner = { "PlayerIconIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriendUserData" },
		{ "ModuleRelativePath", "Public/ELEOSFriendUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs = { "PlayerIconIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriendUserData, PlayerIconIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSFriendUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriendUserData_Statics::NewProp_PlayerIconIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSFriendUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSFriendUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSFriendUserData_Statics::ClassParams = {
		&UELEOSFriendUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELEOSFriendUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriendUserData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSFriendUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriendUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSFriendUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSFriendUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSFriendUserData, 296931102);
	template<> ABP_200508_API UClass* StaticClass<UELEOSFriendUserData>()
	{
		return UELEOSFriendUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSFriendUserData(Z_Construct_UClass_UELEOSFriendUserData, &UELEOSFriendUserData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSFriendUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSFriendUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
