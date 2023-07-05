// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EKeyActionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKeyActionType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyActionType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EKeyActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EKeyActionType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EKeyActionType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EKeyActionType>()
	{
		return EKeyActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKeyActionType(EKeyActionType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EKeyActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EKeyActionType_Hash() { return 1059646496U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EKeyActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKeyActionType"), 0, Get_Z_Construct_UEnum_ABP_200508_EKeyActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKeyActionType::NONE", (int64)EKeyActionType::NONE },
				{ "EKeyActionType::ACTION", (int64)EKeyActionType::ACTION },
				{ "EKeyActionType::GRAPPLE_GUARD", (int64)EKeyActionType::GRAPPLE_GUARD },
				{ "EKeyActionType::TARGET_CHANGE", (int64)EKeyActionType::TARGET_CHANGE },
				{ "EKeyActionType::PIN", (int64)EKeyActionType::PIN },
				{ "EKeyActionType::STRIKE_GUARD", (int64)EKeyActionType::STRIKE_GUARD },
				{ "EKeyActionType::DASH", (int64)EKeyActionType::DASH },
				{ "EKeyActionType::PUNCH", (int64)EKeyActionType::PUNCH },
				{ "EKeyActionType::KICK", (int64)EKeyActionType::KICK },
				{ "EKeyActionType::GRAPPLE", (int64)EKeyActionType::GRAPPLE },
				{ "EKeyActionType::STEAL_FINISHER", (int64)EKeyActionType::STEAL_FINISHER },
				{ "EKeyActionType::PAUSE_MENU", (int64)EKeyActionType::PAUSE_MENU },
				{ "EKeyActionType::MOVE_UP", (int64)EKeyActionType::MOVE_UP },
				{ "EKeyActionType::MOVE_DOWN", (int64)EKeyActionType::MOVE_DOWN },
				{ "EKeyActionType::MOVE_LEFT", (int64)EKeyActionType::MOVE_LEFT },
				{ "EKeyActionType::MOVE_RIGHT", (int64)EKeyActionType::MOVE_RIGHT },
				{ "EKeyActionType::MOVE_UP_DOWN", (int64)EKeyActionType::MOVE_UP_DOWN },
				{ "EKeyActionType::MOVE_LEFT_RIGHT", (int64)EKeyActionType::MOVE_LEFT_RIGHT },
				{ "EKeyActionType::FINISHER_TAUNT_UP", (int64)EKeyActionType::FINISHER_TAUNT_UP },
				{ "EKeyActionType::FINISHER_TAUNT_RIGHT", (int64)EKeyActionType::FINISHER_TAUNT_RIGHT },
				{ "EKeyActionType::FINISHER_TAUNT_DOWN", (int64)EKeyActionType::FINISHER_TAUNT_DOWN },
				{ "EKeyActionType::FINISHER_TAUNT_LEFT", (int64)EKeyActionType::FINISHER_TAUNT_LEFT },
				{ "EKeyActionType::FINISHER_TAUNT_UP_DOWN", (int64)EKeyActionType::FINISHER_TAUNT_UP_DOWN },
				{ "EKeyActionType::FINISHER_TAUNT_LEFT_RIGHT", (int64)EKeyActionType::FINISHER_TAUNT_LEFT_RIGHT },
				{ "EKeyActionType::SIGNATURE_UP", (int64)EKeyActionType::SIGNATURE_UP },
				{ "EKeyActionType::SIGNATURE_RIGHT", (int64)EKeyActionType::SIGNATURE_RIGHT },
				{ "EKeyActionType::SIGNATURE_DOWN", (int64)EKeyActionType::SIGNATURE_DOWN },
				{ "EKeyActionType::SIGNATURE_LEFT", (int64)EKeyActionType::SIGNATURE_LEFT },
				{ "EKeyActionType::SIGNATURE_UP_DOWN", (int64)EKeyActionType::SIGNATURE_UP_DOWN },
				{ "EKeyActionType::SIGNATURE_LEFT_RIGHT", (int64)EKeyActionType::SIGNATURE_LEFT_RIGHT },
				{ "EKeyActionType::SSPUNCH", (int64)EKeyActionType::SSPUNCH },
				{ "EKeyActionType::SSKICK", (int64)EKeyActionType::SSKICK },
				{ "EKeyActionType::SSGRAPPLE", (int64)EKeyActionType::SSGRAPPLE },
				{ "EKeyActionType::SSJUMP", (int64)EKeyActionType::SSJUMP },
				{ "EKeyActionType::SSGUARD", (int64)EKeyActionType::SSGUARD },
				{ "EKeyActionType::SSACTION", (int64)EKeyActionType::SSACTION },
				{ "EKeyActionType::SSAIM", (int64)EKeyActionType::SSAIM },
				{ "EKeyActionType::SSMAP", (int64)EKeyActionType::SSMAP },
				{ "EKeyActionType::SSRESETCAMERA", (int64)EKeyActionType::SSRESETCAMERA },
				{ "EKeyActionType::SSTAUNT", (int64)EKeyActionType::SSTAUNT },
				{ "EKeyActionType::SSINVENTORYDROP", (int64)EKeyActionType::SSINVENTORYDROP },
				{ "EKeyActionType::SSINVENTORYMOVELEFT", (int64)EKeyActionType::SSINVENTORYMOVELEFT },
				{ "EKeyActionType::SSINVENTORYMOVERIGHT", (int64)EKeyActionType::SSINVENTORYMOVERIGHT },
				{ "EKeyActionType::SSRANGEDATTACK", (int64)EKeyActionType::SSRANGEDATTACK },
				{ "EKeyActionType::SSKBACTION1", (int64)EKeyActionType::SSKBACTION1 },
				{ "EKeyActionType::SSKBACTION2", (int64)EKeyActionType::SSKBACTION2 },
				{ "EKeyActionType::SSKBGRAPPLE", (int64)EKeyActionType::SSKBGRAPPLE },
				{ "EKeyActionType::SSKBJUMP", (int64)EKeyActionType::SSKBJUMP },
				{ "EKeyActionType::SSKBGUARD", (int64)EKeyActionType::SSKBGUARD },
				{ "EKeyActionType::SSKBINTERACT", (int64)EKeyActionType::SSKBINTERACT },
				{ "EKeyActionType::SSKBMAP", (int64)EKeyActionType::SSKBMAP },
				{ "EKeyActionType::SSKBRESETCAMERA", (int64)EKeyActionType::SSKBRESETCAMERA },
				{ "EKeyActionType::SSKBTAUNT", (int64)EKeyActionType::SSKBTAUNT },
				{ "EKeyActionType::SSKBINVENTORYDROP", (int64)EKeyActionType::SSKBINVENTORYDROP },
				{ "EKeyActionType::SSKBINVENTORYMOVERIGHT", (int64)EKeyActionType::SSKBINVENTORYMOVERIGHT },
				{ "EKeyActionType::SSKBINVENTORYMOVELEFT", (int64)EKeyActionType::SSKBINVENTORYMOVELEFT },
				{ "EKeyActionType::SSKBABILITY1", (int64)EKeyActionType::SSKBABILITY1 },
				{ "EKeyActionType::SSKBABILITY2", (int64)EKeyActionType::SSKBABILITY2 },
				{ "EKeyActionType::SSKBABILITY3", (int64)EKeyActionType::SSKBABILITY3 },
				{ "EKeyActionType::SSKBMOVEUP", (int64)EKeyActionType::SSKBMOVEUP },
				{ "EKeyActionType::SSKBMOVEDOWN", (int64)EKeyActionType::SSKBMOVEDOWN },
				{ "EKeyActionType::SSKBMOVELEFT", (int64)EKeyActionType::SSKBMOVELEFT },
				{ "EKeyActionType::SSKBMOVERIGHT", (int64)EKeyActionType::SSKBMOVERIGHT },
				{ "EKeyActionType::SSKBPAUSE", (int64)EKeyActionType::SSKBPAUSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTION.Name", "EKeyActionType::ACTION" },
				{ "BlueprintType", "true" },
				{ "DASH.Name", "EKeyActionType::DASH" },
				{ "FINISHER_TAUNT_DOWN.Name", "EKeyActionType::FINISHER_TAUNT_DOWN" },
				{ "FINISHER_TAUNT_LEFT.Name", "EKeyActionType::FINISHER_TAUNT_LEFT" },
				{ "FINISHER_TAUNT_LEFT_RIGHT.Name", "EKeyActionType::FINISHER_TAUNT_LEFT_RIGHT" },
				{ "FINISHER_TAUNT_RIGHT.Name", "EKeyActionType::FINISHER_TAUNT_RIGHT" },
				{ "FINISHER_TAUNT_UP.Name", "EKeyActionType::FINISHER_TAUNT_UP" },
				{ "FINISHER_TAUNT_UP_DOWN.Name", "EKeyActionType::FINISHER_TAUNT_UP_DOWN" },
				{ "GRAPPLE.Name", "EKeyActionType::GRAPPLE" },
				{ "GRAPPLE_GUARD.Name", "EKeyActionType::GRAPPLE_GUARD" },
				{ "KICK.Name", "EKeyActionType::KICK" },
				{ "ModuleRelativePath", "Public/EKeyActionType.h" },
				{ "MOVE_DOWN.Name", "EKeyActionType::MOVE_DOWN" },
				{ "MOVE_LEFT.Name", "EKeyActionType::MOVE_LEFT" },
				{ "MOVE_LEFT_RIGHT.Name", "EKeyActionType::MOVE_LEFT_RIGHT" },
				{ "MOVE_RIGHT.Name", "EKeyActionType::MOVE_RIGHT" },
				{ "MOVE_UP.Name", "EKeyActionType::MOVE_UP" },
				{ "MOVE_UP_DOWN.Name", "EKeyActionType::MOVE_UP_DOWN" },
				{ "NONE.Name", "EKeyActionType::NONE" },
				{ "PAUSE_MENU.Name", "EKeyActionType::PAUSE_MENU" },
				{ "PIN.Name", "EKeyActionType::PIN" },
				{ "PUNCH.Name", "EKeyActionType::PUNCH" },
				{ "SIGNATURE_DOWN.Name", "EKeyActionType::SIGNATURE_DOWN" },
				{ "SIGNATURE_LEFT.Name", "EKeyActionType::SIGNATURE_LEFT" },
				{ "SIGNATURE_LEFT_RIGHT.Name", "EKeyActionType::SIGNATURE_LEFT_RIGHT" },
				{ "SIGNATURE_RIGHT.Name", "EKeyActionType::SIGNATURE_RIGHT" },
				{ "SIGNATURE_UP.Name", "EKeyActionType::SIGNATURE_UP" },
				{ "SIGNATURE_UP_DOWN.Name", "EKeyActionType::SIGNATURE_UP_DOWN" },
				{ "SSACTION.Name", "EKeyActionType::SSACTION" },
				{ "SSAIM.Name", "EKeyActionType::SSAIM" },
				{ "SSGRAPPLE.Name", "EKeyActionType::SSGRAPPLE" },
				{ "SSGUARD.Name", "EKeyActionType::SSGUARD" },
				{ "SSINVENTORYDROP.Name", "EKeyActionType::SSINVENTORYDROP" },
				{ "SSINVENTORYMOVELEFT.Name", "EKeyActionType::SSINVENTORYMOVELEFT" },
				{ "SSINVENTORYMOVERIGHT.Name", "EKeyActionType::SSINVENTORYMOVERIGHT" },
				{ "SSJUMP.Name", "EKeyActionType::SSJUMP" },
				{ "SSKBABILITY1.Name", "EKeyActionType::SSKBABILITY1" },
				{ "SSKBABILITY2.Name", "EKeyActionType::SSKBABILITY2" },
				{ "SSKBABILITY3.Name", "EKeyActionType::SSKBABILITY3" },
				{ "SSKBACTION1.Name", "EKeyActionType::SSKBACTION1" },
				{ "SSKBACTION2.Name", "EKeyActionType::SSKBACTION2" },
				{ "SSKBGRAPPLE.Name", "EKeyActionType::SSKBGRAPPLE" },
				{ "SSKBGUARD.Name", "EKeyActionType::SSKBGUARD" },
				{ "SSKBINTERACT.Name", "EKeyActionType::SSKBINTERACT" },
				{ "SSKBINVENTORYDROP.Name", "EKeyActionType::SSKBINVENTORYDROP" },
				{ "SSKBINVENTORYMOVELEFT.Name", "EKeyActionType::SSKBINVENTORYMOVELEFT" },
				{ "SSKBINVENTORYMOVERIGHT.Name", "EKeyActionType::SSKBINVENTORYMOVERIGHT" },
				{ "SSKBJUMP.Name", "EKeyActionType::SSKBJUMP" },
				{ "SSKBMAP.Name", "EKeyActionType::SSKBMAP" },
				{ "SSKBMOVEDOWN.Name", "EKeyActionType::SSKBMOVEDOWN" },
				{ "SSKBMOVELEFT.Name", "EKeyActionType::SSKBMOVELEFT" },
				{ "SSKBMOVERIGHT.Name", "EKeyActionType::SSKBMOVERIGHT" },
				{ "SSKBMOVEUP.Name", "EKeyActionType::SSKBMOVEUP" },
				{ "SSKBPAUSE.Name", "EKeyActionType::SSKBPAUSE" },
				{ "SSKBRESETCAMERA.Name", "EKeyActionType::SSKBRESETCAMERA" },
				{ "SSKBTAUNT.Name", "EKeyActionType::SSKBTAUNT" },
				{ "SSKICK.Name", "EKeyActionType::SSKICK" },
				{ "SSMAP.Name", "EKeyActionType::SSMAP" },
				{ "SSPUNCH.Name", "EKeyActionType::SSPUNCH" },
				{ "SSRANGEDATTACK.Name", "EKeyActionType::SSRANGEDATTACK" },
				{ "SSRESETCAMERA.Name", "EKeyActionType::SSRESETCAMERA" },
				{ "SSTAUNT.Name", "EKeyActionType::SSTAUNT" },
				{ "STEAL_FINISHER.Name", "EKeyActionType::STEAL_FINISHER" },
				{ "STRIKE_GUARD.Name", "EKeyActionType::STRIKE_GUARD" },
				{ "TARGET_CHANGE.Name", "EKeyActionType::TARGET_CHANGE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EKeyActionType",
				"EKeyActionType",
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
