// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaComponentTextureType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentTextureType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaComponentTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentTextureType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentTextureType>()
	{
		return EManaComponentTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaComponentTextureType(EManaComponentTextureType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaComponentTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Hash() { return 856495004U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaComponentTextureType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaComponentTextureType::Texture_Y", (int64)EManaComponentTextureType::Texture_Y },
				{ "EManaComponentTextureType::Texture_U", (int64)EManaComponentTextureType::Texture_U },
				{ "EManaComponentTextureType::Texture_V", (int64)EManaComponentTextureType::Texture_V },
				{ "EManaComponentTextureType::Texture_A", (int64)EManaComponentTextureType::Texture_A },
				{ "EManaComponentTextureType::Texture_UV", (int64)EManaComponentTextureType::Texture_UV },
				{ "EManaComponentTextureType::Texture_RGB", (int64)EManaComponentTextureType::Texture_RGB },
				{ "EManaComponentTextureType::Texture_External", (int64)EManaComponentTextureType::Texture_External },
				{ "EManaComponentTextureType::Texture_MAX", (int64)EManaComponentTextureType::Texture_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EManaComponentTextureType.h" },
				{ "Texture_A.Name", "EManaComponentTextureType::Texture_A" },
				{ "Texture_External.Name", "EManaComponentTextureType::Texture_External" },
				{ "Texture_MAX.Hidden", "" },
				{ "Texture_MAX.Name", "EManaComponentTextureType::Texture_MAX" },
				{ "Texture_RGB.Name", "EManaComponentTextureType::Texture_RGB" },
				{ "Texture_U.Name", "EManaComponentTextureType::Texture_U" },
				{ "Texture_UV.Name", "EManaComponentTextureType::Texture_UV" },
				{ "Texture_V.Name", "EManaComponentTextureType::Texture_V" },
				{ "Texture_Y.Name", "EManaComponentTextureType::Texture_Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaComponentTextureType",
				"EManaComponentTextureType",
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
