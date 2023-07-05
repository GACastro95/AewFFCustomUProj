// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CharacterProfilesInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterProfilesInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightType();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetBodyHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBodyHeight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetBodyHeightType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBodyHeightType*)Z_Param__Result=P_THIS->GetBodyHeightType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetBodyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBodyType*)Z_Param__Result=P_THIS->GetBodyType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetBodyWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBodyWeight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetBodyWeightType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBodyWeightType*)Z_Param__Result=P_THIS->GetBodyWeightType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetCharacterNameText)
	{
		P_GET_UBOOL(Z_Param_bUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCharacterNameText_Implementation(Z_Param_bUpper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetDisplayBodyHeightText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayBodyHeightText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetDisplayBodyWeightText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayBodyWeightText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGender*)Z_Param__Result=P_THIS->GetGender_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetUID_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterProfilesInterface::execGetVoiceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVoiceType_Implementation();
		P_NATIVE_END;
	}
	float ICharacterProfilesInterface::GetBodyHeight() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyHeight instead.");
		CharacterProfilesInterface_eventGetBodyHeight_Parms Parms;
		return Parms.ReturnValue;
	}
	EBodyHeightType ICharacterProfilesInterface::GetBodyHeightType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyHeightType instead.");
		CharacterProfilesInterface_eventGetBodyHeightType_Parms Parms;
		return Parms.ReturnValue;
	}
	EBodyType ICharacterProfilesInterface::GetBodyType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyType instead.");
		CharacterProfilesInterface_eventGetBodyType_Parms Parms;
		return Parms.ReturnValue;
	}
	float ICharacterProfilesInterface::GetBodyWeight() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyWeight instead.");
		CharacterProfilesInterface_eventGetBodyWeight_Parms Parms;
		return Parms.ReturnValue;
	}
	EBodyWeightType ICharacterProfilesInterface::GetBodyWeightType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBodyWeightType instead.");
		CharacterProfilesInterface_eventGetBodyWeightType_Parms Parms;
		return Parms.ReturnValue;
	}
	FText ICharacterProfilesInterface::GetCharacterNameText(bool bUpper) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCharacterNameText instead.");
		CharacterProfilesInterface_eventGetCharacterNameText_Parms Parms;
		return Parms.ReturnValue;
	}
	FText ICharacterProfilesInterface::GetDisplayBodyHeightText() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDisplayBodyHeightText instead.");
		CharacterProfilesInterface_eventGetDisplayBodyHeightText_Parms Parms;
		return Parms.ReturnValue;
	}
	FText ICharacterProfilesInterface::GetDisplayBodyWeightText() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDisplayBodyWeightText instead.");
		CharacterProfilesInterface_eventGetDisplayBodyWeightText_Parms Parms;
		return Parms.ReturnValue;
	}
	EGender ICharacterProfilesInterface::GetGender() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGender instead.");
		CharacterProfilesInterface_eventGetGender_Parms Parms;
		return Parms.ReturnValue;
	}
	FGuid ICharacterProfilesInterface::GetUID() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUID instead.");
		CharacterProfilesInterface_eventGetUID_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 ICharacterProfilesInterface::GetVoiceType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVoiceType instead.");
		CharacterProfilesInterface_eventGetVoiceType_Parms Parms;
		return Parms.ReturnValue;
	}
	void UCharacterProfilesInterface::StaticRegisterNativesUCharacterProfilesInterface()
	{
		UClass* Class = UCharacterProfilesInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodyHeight", &ICharacterProfilesInterface::execGetBodyHeight },
			{ "GetBodyHeightType", &ICharacterProfilesInterface::execGetBodyHeightType },
			{ "GetBodyType", &ICharacterProfilesInterface::execGetBodyType },
			{ "GetBodyWeight", &ICharacterProfilesInterface::execGetBodyWeight },
			{ "GetBodyWeightType", &ICharacterProfilesInterface::execGetBodyWeightType },
			{ "GetCharacterNameText", &ICharacterProfilesInterface::execGetCharacterNameText },
			{ "GetDisplayBodyHeightText", &ICharacterProfilesInterface::execGetDisplayBodyHeightText },
			{ "GetDisplayBodyWeightText", &ICharacterProfilesInterface::execGetDisplayBodyWeightText },
			{ "GetGender", &ICharacterProfilesInterface::execGetGender },
			{ "GetUID", &ICharacterProfilesInterface::execGetUID },
			{ "GetVoiceType", &ICharacterProfilesInterface::execGetVoiceType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetBodyHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetBodyHeight", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetBodyHeight_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetBodyHeightType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EBodyHeightType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetBodyHeightType", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetBodyHeightType_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetBodyType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetBodyType", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetBodyType_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetBodyWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetBodyWeight", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetBodyWeight_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetBodyWeightType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EBodyWeightType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetBodyWeightType", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetBodyWeightType_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((CharacterProfilesInterface_eventGetCharacterNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterProfilesInterface_eventGetCharacterNameText_Parms), &Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetCharacterNameText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetCharacterNameText", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetCharacterNameText_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetDisplayBodyHeightText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetDisplayBodyHeightText", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetDisplayBodyHeightText_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetDisplayBodyWeightText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetDisplayBodyWeightText", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetDisplayBodyWeightText_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetGender", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetGender_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetUID", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetUID_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesInterface_eventGetVoiceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesInterface, nullptr, "GetVoiceType", nullptr, nullptr, sizeof(CharacterProfilesInterface_eventGetVoiceType_Parms), Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterProfilesInterface_NoRegister()
	{
		return UCharacterProfilesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterProfilesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterProfilesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterProfilesInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeight, "GetBodyHeight" }, // 847152478
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyHeightType, "GetBodyHeightType" }, // 1483882787
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyType, "GetBodyType" }, // 4204701758
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeight, "GetBodyWeight" }, // 1264473863
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetBodyWeightType, "GetBodyWeightType" }, // 235311645
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetCharacterNameText, "GetCharacterNameText" }, // 1500926086
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyHeightText, "GetDisplayBodyHeightText" }, // 459598966
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetDisplayBodyWeightText, "GetDisplayBodyWeightText" }, // 298559817
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetGender, "GetGender" }, // 781006658
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetUID, "GetUID" }, // 2913242849
		{ &Z_Construct_UFunction_UCharacterProfilesInterface_GetVoiceType, "GetVoiceType" }, // 3703873679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterProfilesInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterProfilesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterProfilesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharacterProfilesInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterProfilesInterface_Statics::ClassParams = {
		&UCharacterProfilesInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterProfilesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfilesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterProfilesInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterProfilesInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterProfilesInterface, 1850992168);
	template<> ABP_200508_API UClass* StaticClass<UCharacterProfilesInterface>()
	{
		return UCharacterProfilesInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterProfilesInterface(Z_Construct_UClass_UCharacterProfilesInterface, &UCharacterProfilesInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCharacterProfilesInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterProfilesInterface);
	static FName NAME_UCharacterProfilesInterface_GetBodyHeight = FName(TEXT("GetBodyHeight"));
	float ICharacterProfilesInterface::Execute_GetBodyHeight(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetBodyHeight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetBodyHeight);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyHeight_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetBodyHeightType = FName(TEXT("GetBodyHeightType"));
	EBodyHeightType ICharacterProfilesInterface::Execute_GetBodyHeightType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetBodyHeightType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetBodyHeightType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyHeightType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetBodyType = FName(TEXT("GetBodyType"));
	EBodyType ICharacterProfilesInterface::Execute_GetBodyType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetBodyType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetBodyType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetBodyWeight = FName(TEXT("GetBodyWeight"));
	float ICharacterProfilesInterface::Execute_GetBodyWeight(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetBodyWeight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetBodyWeight);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyWeight_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetBodyWeightType = FName(TEXT("GetBodyWeightType"));
	EBodyWeightType ICharacterProfilesInterface::Execute_GetBodyWeightType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetBodyWeightType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetBodyWeightType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetBodyWeightType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetCharacterNameText = FName(TEXT("GetCharacterNameText"));
	FText ICharacterProfilesInterface::Execute_GetCharacterNameText(const UObject* O, bool bUpper)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetCharacterNameText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetCharacterNameText);
		if (Func)
		{
			Parms.bUpper=bUpper;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCharacterNameText_Implementation(bUpper);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetDisplayBodyHeightText = FName(TEXT("GetDisplayBodyHeightText"));
	FText ICharacterProfilesInterface::Execute_GetDisplayBodyHeightText(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetDisplayBodyHeightText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetDisplayBodyHeightText);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDisplayBodyHeightText_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetDisplayBodyWeightText = FName(TEXT("GetDisplayBodyWeightText"));
	FText ICharacterProfilesInterface::Execute_GetDisplayBodyWeightText(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetDisplayBodyWeightText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetDisplayBodyWeightText);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDisplayBodyWeightText_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetGender = FName(TEXT("GetGender"));
	EGender ICharacterProfilesInterface::Execute_GetGender(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetGender_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetGender);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGender_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetUID = FName(TEXT("GetUID"));
	FGuid ICharacterProfilesInterface::Execute_GetUID(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetUID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetUID);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetUID_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCharacterProfilesInterface_GetVoiceType = FName(TEXT("GetVoiceType"));
	int32 ICharacterProfilesInterface::Execute_GetVoiceType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterProfilesInterface::StaticClass()));
		CharacterProfilesInterface_eventGetVoiceType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCharacterProfilesInterface_GetVoiceType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ICharacterProfilesInterface*)(O->GetNativeInterfaceAddress(UCharacterProfilesInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVoiceType_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
