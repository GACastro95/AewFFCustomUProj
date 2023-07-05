// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_UGC_Room.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_UGC_Room() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Room_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Room();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_UGC_Room::StaticRegisterNativesUSaveData_UGC_Room()
	{
	}
	UClass* Z_Construct_UClass_USaveData_UGC_Room_NoRegister()
	{
		return USaveData_UGC_Room::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_UGC_Room_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_UGC_Room_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Room_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_UGC_Room.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Room.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_UGC_Room_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_UGC_Room>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_UGC_Room_Statics::ClassParams = {
		&USaveData_UGC_Room::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Room_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Room_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_UGC_Room()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_UGC_Room_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_UGC_Room, 2301170436);
	template<> ABP_200508_API UClass* StaticClass<USaveData_UGC_Room>()
	{
		return USaveData_UGC_Room::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_UGC_Room(Z_Construct_UClass_USaveData_UGC_Room, &USaveData_UGC_Room::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_UGC_Room"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_UGC_Room);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
