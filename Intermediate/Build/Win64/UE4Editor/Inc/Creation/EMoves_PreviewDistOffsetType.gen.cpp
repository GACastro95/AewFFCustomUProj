// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMoves_PreviewDistOffsetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMoves_PreviewDistOffsetType() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMoves_PreviewDistOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType, Z_Construct_UPackage__Script_Creation(), TEXT("EMoves_PreviewDistOffsetType"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMoves_PreviewDistOffsetType>()
	{
		return EMoves_PreviewDistOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoves_PreviewDistOffsetType(EMoves_PreviewDistOffsetType_StaticEnum, TEXT("/Script/Creation"), TEXT("EMoves_PreviewDistOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType_Hash() { return 3292788627U; }
	UEnum* Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoves_PreviewDistOffsetType"), 0, Get_Z_Construct_UEnum_Creation_EMoves_PreviewDistOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoves_PreviewDistOffsetType::None", (int64)EMoves_PreviewDistOffsetType::None },
				{ "EMoves_PreviewDistOffsetType::Equality", (int64)EMoves_PreviewDistOffsetType::Equality },
				{ "EMoves_PreviewDistOffsetType::Player1Only", (int64)EMoves_PreviewDistOffsetType::Player1Only },
				{ "EMoves_PreviewDistOffsetType::Player2Only", (int64)EMoves_PreviewDistOffsetType::Player2Only },
				{ "EMoves_PreviewDistOffsetType::EMoves_MAX", (int64)EMoves_PreviewDistOffsetType::EMoves_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMoves_MAX.Hidden", "" },
				{ "EMoves_MAX.Name", "EMoves_PreviewDistOffsetType::EMoves_MAX" },
				{ "Equality.Name", "EMoves_PreviewDistOffsetType::Equality" },
				{ "ModuleRelativePath", "Public/EMoves_PreviewDistOffsetType.h" },
				{ "None.Name", "EMoves_PreviewDistOffsetType::None" },
				{ "Player1Only.Name", "EMoves_PreviewDistOffsetType::Player1Only" },
				{ "Player2Only.Name", "EMoves_PreviewDistOffsetType::Player2Only" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMoves_PreviewDistOffsetType",
				"EMoves_PreviewDistOffsetType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
