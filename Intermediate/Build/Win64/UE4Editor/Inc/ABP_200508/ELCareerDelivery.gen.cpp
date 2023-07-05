// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerDelivery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerDelivery() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerDelivery_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerDelivery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStartInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenu();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenuExit();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerDelivery::execGetCareerStartInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerStartInfo*)Z_Param__Result=P_THIS->GetCareerStartInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerModeDifficulty*)Z_Param__Result=P_THIS->GetDecisionDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionDispTutorialDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDecisionDispTutorialDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionPresetNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDecisionPresetNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDecisionSubtitles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionVegetarian)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDecisionVegetarian();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionWrestlerGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetDecisionWrestlerGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetDecisionWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetDecisionWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetOtherMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerOtherMenu*)Z_Param__Result=P_THIS->GetOtherMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetOtherMenuExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerOtherMenuExit*)Z_Param__Result=P_THIS->GetOtherMenuExit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execGetPersonalityType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPersonalityType*)Z_Param__Result=P_THIS->GetPersonalityType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetCareerStartInfo)
	{
		P_GET_ENUM(ECareerStartInfo,Z_Param_eStartInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerStartInfo(ECareerStartInfo(Z_Param_eStartInfo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionDifficulty)
	{
		P_GET_ENUM(ECareerModeDifficulty,Z_Param_eDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionDifficulty(ECareerModeDifficulty(Z_Param_eDifficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionDispTutorialDialog)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionDispTutorialDialog(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionPresetNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_No);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionPresetNo(Z_Param_No);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionSubtitles)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionSubtitles(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionVegetarian)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionVegetarian(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionWrestlerGUID)
	{
		P_GET_STRUCT(FGuid,Z_Param_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionWrestlerGUID(Z_Param_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetDecisionWrestlerID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_eWrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecisionWrestlerID(EWrestlerID_N(Z_Param_eWrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetOtherMenu)
	{
		P_GET_ENUM(ECareerOtherMenu,Z_Param_eOtherMenu);
		P_GET_ENUM(ECareerOtherMenuExit,Z_Param_eOtherMenuExit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOtherMenu(ECareerOtherMenu(Z_Param_eOtherMenu),ECareerOtherMenuExit(Z_Param_eOtherMenuExit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerDelivery::execSetPersonalityType)
	{
		P_GET_ENUM(EPersonalityType,Z_Param_EPersonalityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonalityType(EPersonalityType(Z_Param_EPersonalityType));
		P_NATIVE_END;
	}
	void UELCareerDelivery::StaticRegisterNativesUELCareerDelivery()
	{
		UClass* Class = UELCareerDelivery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCareerStartInfo", &UELCareerDelivery::execGetCareerStartInfo },
			{ "GetDecisionDifficulty", &UELCareerDelivery::execGetDecisionDifficulty },
			{ "GetDecisionDispTutorialDialog", &UELCareerDelivery::execGetDecisionDispTutorialDialog },
			{ "GetDecisionPresetNo", &UELCareerDelivery::execGetDecisionPresetNo },
			{ "GetDecisionSubtitles", &UELCareerDelivery::execGetDecisionSubtitles },
			{ "GetDecisionVegetarian", &UELCareerDelivery::execGetDecisionVegetarian },
			{ "GetDecisionWrestlerGUID", &UELCareerDelivery::execGetDecisionWrestlerGUID },
			{ "GetDecisionWrestlerID", &UELCareerDelivery::execGetDecisionWrestlerID },
			{ "GetOtherMenu", &UELCareerDelivery::execGetOtherMenu },
			{ "GetOtherMenuExit", &UELCareerDelivery::execGetOtherMenuExit },
			{ "GetPersonalityType", &UELCareerDelivery::execGetPersonalityType },
			{ "Init", &UELCareerDelivery::execInit },
			{ "SetCareerStartInfo", &UELCareerDelivery::execSetCareerStartInfo },
			{ "SetDecisionDifficulty", &UELCareerDelivery::execSetDecisionDifficulty },
			{ "SetDecisionDispTutorialDialog", &UELCareerDelivery::execSetDecisionDispTutorialDialog },
			{ "SetDecisionPresetNo", &UELCareerDelivery::execSetDecisionPresetNo },
			{ "SetDecisionSubtitles", &UELCareerDelivery::execSetDecisionSubtitles },
			{ "SetDecisionVegetarian", &UELCareerDelivery::execSetDecisionVegetarian },
			{ "SetDecisionWrestlerGUID", &UELCareerDelivery::execSetDecisionWrestlerGUID },
			{ "SetDecisionWrestlerID", &UELCareerDelivery::execSetDecisionWrestlerID },
			{ "SetOtherMenu", &UELCareerDelivery::execSetOtherMenu },
			{ "SetPersonalityType", &UELCareerDelivery::execSetPersonalityType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics
	{
		struct ELCareerDelivery_eventGetCareerStartInfo_Parms
		{
			ECareerStartInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetCareerStartInfo_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerStartInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetCareerStartInfo", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetCareerStartInfo_Parms), Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics
	{
		struct ELCareerDelivery_eventGetDecisionDifficulty_Parms
		{
			ECareerModeDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetDecisionDifficulty_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionDifficulty", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionDifficulty_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics
	{
		struct ELCareerDelivery_eventGetDecisionDispTutorialDialog_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventGetDecisionDispTutorialDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventGetDecisionDispTutorialDialog_Parms), &Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionDispTutorialDialog", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionDispTutorialDialog_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics
	{
		struct ELCareerDelivery_eventGetDecisionPresetNo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetDecisionPresetNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionPresetNo", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionPresetNo_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics
	{
		struct ELCareerDelivery_eventGetDecisionSubtitles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventGetDecisionSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventGetDecisionSubtitles_Parms), &Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionSubtitles", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionSubtitles_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics
	{
		struct ELCareerDelivery_eventGetDecisionVegetarian_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventGetDecisionVegetarian_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventGetDecisionVegetarian_Parms), &Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionVegetarian", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionVegetarian_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics
	{
		struct ELCareerDelivery_eventGetDecisionWrestlerGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetDecisionWrestlerGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionWrestlerGUID", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionWrestlerGUID_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics
	{
		struct ELCareerDelivery_eventGetDecisionWrestlerID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetDecisionWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetDecisionWrestlerID", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetDecisionWrestlerID_Parms), Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics
	{
		struct ELCareerDelivery_eventGetOtherMenu_Parms
		{
			ECareerOtherMenu ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetOtherMenu_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerOtherMenu, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetOtherMenu", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetOtherMenu_Parms), Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics
	{
		struct ELCareerDelivery_eventGetOtherMenuExit_Parms
		{
			ECareerOtherMenuExit ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetOtherMenuExit_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerOtherMenuExit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetOtherMenuExit", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetOtherMenuExit_Parms), Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics
	{
		struct ELCareerDelivery_eventGetPersonalityType_Parms
		{
			EPersonalityType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventGetPersonalityType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "GetPersonalityType", nullptr, nullptr, sizeof(ELCareerDelivery_eventGetPersonalityType_Parms), Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics
	{
		struct ELCareerDelivery_eventSetCareerStartInfo_Parms
		{
			ECareerStartInfo eStartInfo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eStartInfo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eStartInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::NewProp_eStartInfo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::NewProp_eStartInfo = { "eStartInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetCareerStartInfo_Parms, eStartInfo), Z_Construct_UEnum_ABP_200508_ECareerStartInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::NewProp_eStartInfo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::NewProp_eStartInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetCareerStartInfo", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetCareerStartInfo_Parms), Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics
	{
		struct ELCareerDelivery_eventSetDecisionDifficulty_Parms
		{
			ECareerModeDifficulty eDifficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::NewProp_eDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::NewProp_eDifficulty = { "eDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetDecisionDifficulty_Parms, eDifficulty), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::NewProp_eDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::NewProp_eDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionDifficulty", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionDifficulty_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics
	{
		struct ELCareerDelivery_eventSetDecisionDispTutorialDialog_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventSetDecisionDispTutorialDialog_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventSetDecisionDispTutorialDialog_Parms), &Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionDispTutorialDialog", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionDispTutorialDialog_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics
	{
		struct ELCareerDelivery_eventSetDecisionPresetNo_Parms
		{
			int32 No;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetDecisionPresetNo_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::NewProp_No,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionPresetNo", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionPresetNo_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics
	{
		struct ELCareerDelivery_eventSetDecisionSubtitles_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventSetDecisionSubtitles_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventSetDecisionSubtitles_Parms), &Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionSubtitles", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionSubtitles_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics
	{
		struct ELCareerDelivery_eventSetDecisionVegetarian_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerDelivery_eventSetDecisionVegetarian_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerDelivery_eventSetDecisionVegetarian_Parms), &Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionVegetarian", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionVegetarian_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics
	{
		struct ELCareerDelivery_eventSetDecisionWrestlerGUID_Parms
		{
			FGuid Guid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetDecisionWrestlerGUID_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::NewProp_Guid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionWrestlerGUID", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionWrestlerGUID_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics
	{
		struct ELCareerDelivery_eventSetDecisionWrestlerID_Parms
		{
			EWrestlerID_N eWrestlerID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::NewProp_eWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::NewProp_eWrestlerID = { "eWrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetDecisionWrestlerID_Parms, eWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::NewProp_eWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::NewProp_eWrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetDecisionWrestlerID", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetDecisionWrestlerID_Parms), Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics
	{
		struct ELCareerDelivery_eventSetOtherMenu_Parms
		{
			ECareerOtherMenu eOtherMenu;
			ECareerOtherMenuExit eOtherMenuExit;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOtherMenu_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOtherMenu;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOtherMenuExit_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOtherMenuExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenu_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenu = { "eOtherMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetOtherMenu_Parms, eOtherMenu), Z_Construct_UEnum_ABP_200508_ECareerOtherMenu, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenuExit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenuExit = { "eOtherMenuExit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetOtherMenu_Parms, eOtherMenuExit), Z_Construct_UEnum_ABP_200508_ECareerOtherMenuExit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenu_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenuExit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::NewProp_eOtherMenuExit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetOtherMenu", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetOtherMenu_Parms), Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics
	{
		struct ELCareerDelivery_eventSetPersonalityType_Parms
		{
			EPersonalityType EPersonalityType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EPersonalityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EPersonalityType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::NewProp_EPersonalityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::NewProp_EPersonalityType = { "EPersonalityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDelivery_eventSetPersonalityType_Parms, EPersonalityType), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::NewProp_EPersonalityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::NewProp_EPersonalityType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDelivery, nullptr, "SetPersonalityType", nullptr, nullptr, sizeof(ELCareerDelivery_eventSetPersonalityType_Parms), Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerDelivery_NoRegister()
	{
		return UELCareerDelivery::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerDelivery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerDelivery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerDelivery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerDelivery_GetCareerStartInfo, "GetCareerStartInfo" }, // 127765995
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionDifficulty, "GetDecisionDifficulty" }, // 194089553
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionDispTutorialDialog, "GetDecisionDispTutorialDialog" }, // 2768374381
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionPresetNo, "GetDecisionPresetNo" }, // 2785479511
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionSubtitles, "GetDecisionSubtitles" }, // 4221866240
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionVegetarian, "GetDecisionVegetarian" }, // 3492352625
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerGUID, "GetDecisionWrestlerGUID" }, // 3273722630
		{ &Z_Construct_UFunction_UELCareerDelivery_GetDecisionWrestlerID, "GetDecisionWrestlerID" }, // 3163301135
		{ &Z_Construct_UFunction_UELCareerDelivery_GetOtherMenu, "GetOtherMenu" }, // 3395998701
		{ &Z_Construct_UFunction_UELCareerDelivery_GetOtherMenuExit, "GetOtherMenuExit" }, // 1942813618
		{ &Z_Construct_UFunction_UELCareerDelivery_GetPersonalityType, "GetPersonalityType" }, // 4108808850
		{ &Z_Construct_UFunction_UELCareerDelivery_Init, "Init" }, // 2077581265
		{ &Z_Construct_UFunction_UELCareerDelivery_SetCareerStartInfo, "SetCareerStartInfo" }, // 3866724323
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionDifficulty, "SetDecisionDifficulty" }, // 2307233644
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionDispTutorialDialog, "SetDecisionDispTutorialDialog" }, // 400710491
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionPresetNo, "SetDecisionPresetNo" }, // 1129065093
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionSubtitles, "SetDecisionSubtitles" }, // 3060934351
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionVegetarian, "SetDecisionVegetarian" }, // 3412956664
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerGUID, "SetDecisionWrestlerGUID" }, // 2902657997
		{ &Z_Construct_UFunction_UELCareerDelivery_SetDecisionWrestlerID, "SetDecisionWrestlerID" }, // 3324041712
		{ &Z_Construct_UFunction_UELCareerDelivery_SetOtherMenu, "SetOtherMenu" }, // 2825456939
		{ &Z_Construct_UFunction_UELCareerDelivery_SetPersonalityType, "SetPersonalityType" }, // 4236546216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerDelivery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerDelivery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerDelivery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerDelivery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerDelivery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerDelivery_Statics::ClassParams = {
		&UELCareerDelivery::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerDelivery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerDelivery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerDelivery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerDelivery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerDelivery, 4004697530);
	template<> ABP_200508_API UClass* StaticClass<UELCareerDelivery>()
	{
		return UELCareerDelivery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerDelivery(Z_Construct_UClass_UELCareerDelivery, &UELCareerDelivery::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerDelivery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerDelivery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
