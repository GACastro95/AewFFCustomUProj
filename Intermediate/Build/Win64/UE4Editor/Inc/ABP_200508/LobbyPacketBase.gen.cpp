// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void ULobbyPacketBase::StaticRegisterNativesULobbyPacketBase()
	{
	}
	UClass* Z_Construct_UClass_ULobbyPacketBase_NoRegister()
	{
		return ULobbyPacketBase::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketBase_Statics::ClassParams = {
		&ULobbyPacketBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketBase, 778985721);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketBase>()
	{
		return ULobbyPacketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketBase(Z_Construct_UClass_ULobbyPacketBase, &ULobbyPacketBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
