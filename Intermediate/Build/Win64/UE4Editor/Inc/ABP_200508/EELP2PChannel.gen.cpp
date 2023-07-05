// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELP2PChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELP2PChannel() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELP2PChannel();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELP2PChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELP2PChannel, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELP2PChannel"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELP2PChannel>()
	{
		return EELP2PChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELP2PChannel(EELP2PChannel_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELP2PChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELP2PChannel_Hash() { return 1666032628U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELP2PChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELP2PChannel"), 0, Get_Z_Construct_UEnum_ABP_200508_EELP2PChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELP2PChannel::Default", (int64)EELP2PChannel::Default },
				{ "EELP2PChannel::BlueprintRPC", (int64)EELP2PChannel::BlueprintRPC },
				{ "EELP2PChannel::PartyChat", (int64)EELP2PChannel::PartyChat },
				{ "EELP2PChannel::FriendChat", (int64)EELP2PChannel::FriendChat },
				{ "EELP2PChannel::SessionObject", (int64)EELP2PChannel::SessionObject },
				{ "EELP2PChannel::PartyObject", (int64)EELP2PChannel::PartyObject },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintRPC.Name", "EELP2PChannel::BlueprintRPC" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "EELP2PChannel::Default" },
				{ "FriendChat.Name", "EELP2PChannel::FriendChat" },
				{ "ModuleRelativePath", "Public/EELP2PChannel.h" },
				{ "PartyChat.Name", "EELP2PChannel::PartyChat" },
				{ "PartyObject.Name", "EELP2PChannel::PartyObject" },
				{ "SessionObject.Name", "EELP2PChannel::SessionObject" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELP2PChannel",
				"EELP2PChannel",
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
