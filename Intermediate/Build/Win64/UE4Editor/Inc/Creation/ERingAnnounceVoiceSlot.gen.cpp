// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ERingAnnounceVoiceSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERingAnnounceVoiceSlot() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_ERingAnnounceVoiceSlot();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* ERingAnnounceVoiceSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_ERingAnnounceVoiceSlot, Z_Construct_UPackage__Script_Creation(), TEXT("ERingAnnounceVoiceSlot"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<ERingAnnounceVoiceSlot>()
	{
		return ERingAnnounceVoiceSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERingAnnounceVoiceSlot(ERingAnnounceVoiceSlot_StaticEnum, TEXT("/Script/Creation"), TEXT("ERingAnnounceVoiceSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_ERingAnnounceVoiceSlot_Hash() { return 391741651U; }
	UEnum* Z_Construct_UEnum_Creation_ERingAnnounceVoiceSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERingAnnounceVoiceSlot"), 0, Get_Z_Construct_UEnum_Creation_ERingAnnounceVoiceSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERingAnnounceVoiceSlot::VoiceSlot1", (int64)ERingAnnounceVoiceSlot::VoiceSlot1 },
				{ "ERingAnnounceVoiceSlot::VoiceSlot2", (int64)ERingAnnounceVoiceSlot::VoiceSlot2 },
				{ "ERingAnnounceVoiceSlot::VoiceSlot3", (int64)ERingAnnounceVoiceSlot::VoiceSlot3 },
				{ "ERingAnnounceVoiceSlot::VoiceSlot4", (int64)ERingAnnounceVoiceSlot::VoiceSlot4 },
				{ "ERingAnnounceVoiceSlot::Num", (int64)ERingAnnounceVoiceSlot::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERingAnnounceVoiceSlot.h" },
				{ "Num.Name", "ERingAnnounceVoiceSlot::Num" },
				{ "VoiceSlot1.Name", "ERingAnnounceVoiceSlot::VoiceSlot1" },
				{ "VoiceSlot2.Name", "ERingAnnounceVoiceSlot::VoiceSlot2" },
				{ "VoiceSlot3.Name", "ERingAnnounceVoiceSlot::VoiceSlot3" },
				{ "VoiceSlot4.Name", "ERingAnnounceVoiceSlot::VoiceSlot4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"ERingAnnounceVoiceSlot",
				"ERingAnnounceVoiceSlot",
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
