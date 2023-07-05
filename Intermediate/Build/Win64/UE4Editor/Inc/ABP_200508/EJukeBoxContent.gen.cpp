// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EJukeBoxContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJukeBoxContent() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EJukeBoxContent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EJukeBoxContent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EJukeBoxContent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EJukeBoxContent"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EJukeBoxContent>()
	{
		return EJukeBoxContent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJukeBoxContent(EJukeBoxContent_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EJukeBoxContent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EJukeBoxContent_Hash() { return 1004658619U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EJukeBoxContent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJukeBoxContent"), 0, Get_Z_Construct_UEnum_ABP_200508_EJukeBoxContent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJukeBoxContent::Button", (int64)EJukeBoxContent::Button },
				{ "EJukeBoxContent::Index", (int64)EJukeBoxContent::Index },
				{ "EJukeBoxContent::TrackingGroup", (int64)EJukeBoxContent::TrackingGroup },
				{ "EJukeBoxContent::WrestlerID", (int64)EJukeBoxContent::WrestlerID },
				{ "EJukeBoxContent::WrestlerName", (int64)EJukeBoxContent::WrestlerName },
				{ "EJukeBoxContent::EntranceCueEvent", (int64)EJukeBoxContent::EntranceCueEvent },
				{ "EJukeBoxContent::VictoryCueEvent", (int64)EJukeBoxContent::VictoryCueEvent },
				{ "EJukeBoxContent::JukeBox", (int64)EJukeBoxContent::JukeBox },
				{ "EJukeBoxContent::DefaultSelect", (int64)EJukeBoxContent::DefaultSelect },
				{ "EJukeBoxContent::SongTitle", (int64)EJukeBoxContent::SongTitle },
				{ "EJukeBoxContent::JukeBoxCue", (int64)EJukeBoxContent::JukeBoxCue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button.Name", "EJukeBoxContent::Button" },
				{ "DefaultSelect.Name", "EJukeBoxContent::DefaultSelect" },
				{ "EntranceCueEvent.Name", "EJukeBoxContent::EntranceCueEvent" },
				{ "Index.Name", "EJukeBoxContent::Index" },
				{ "JukeBox.Name", "EJukeBoxContent::JukeBox" },
				{ "JukeBoxCue.Name", "EJukeBoxContent::JukeBoxCue" },
				{ "ModuleRelativePath", "Public/EJukeBoxContent.h" },
				{ "SongTitle.Name", "EJukeBoxContent::SongTitle" },
				{ "TrackingGroup.Name", "EJukeBoxContent::TrackingGroup" },
				{ "VictoryCueEvent.Name", "EJukeBoxContent::VictoryCueEvent" },
				{ "WrestlerID.Name", "EJukeBoxContent::WrestlerID" },
				{ "WrestlerName.Name", "EJukeBoxContent::WrestlerName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EJukeBoxContent",
				"EJukeBoxContent",
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
