// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EOSLobbyReceivePacketEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyReceivePacketEventDelegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms
		{
			EELEOSLobbyPacketType _PacketType;
			ULobbyPacketBase* _Packet;
			UEOSUserBase* _UserBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__PacketType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__PacketType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Packet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__UserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__PacketType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__PacketType = { "_PacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms, _PacketType), Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__Packet = { "_Packet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms, _Packet), Z_Construct_UClass_ULobbyPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__UserBase = { "_UserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms, _UserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__PacketType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__PacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__Packet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::NewProp__UserBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyReceivePacketEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "EOSLobbyReceivePacketEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventEOSLobbyReceivePacketEvent_Parms), Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
