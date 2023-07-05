// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YMiniGameAutoPlay_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYMiniGameAutoPlay_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
// End Cross Module References
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execGetAllWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetAllWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execGetTargetWrestlerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetTargetWrestlerID(Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execIsEnableAutoPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableAutoPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execIsEnableGame)
	{
		P_GET_ENUM(EMiniGameID,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableGame(EMiniGameID(Z_Param__id));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execIsLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execIsSkipGamePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkipGamePlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYMiniGameAutoPlay_DebugMenu::execSetEnableAutoPlay)
	{
		P_GET_UBOOL(Z_Param__EnableAutoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableAutoPlay(Z_Param__EnableAutoPlay);
		P_NATIVE_END;
	}
	void UYMiniGameAutoPlay_DebugMenu::StaticRegisterNativesUYMiniGameAutoPlay_DebugMenu()
	{
		UClass* Class = UYMiniGameAutoPlay_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllWrestlerID", &UYMiniGameAutoPlay_DebugMenu::execGetAllWrestlerID },
			{ "GetTargetWrestlerID", &UYMiniGameAutoPlay_DebugMenu::execGetTargetWrestlerID },
			{ "IsEnableAutoPlay", &UYMiniGameAutoPlay_DebugMenu::execIsEnableAutoPlay },
			{ "IsEnableGame", &UYMiniGameAutoPlay_DebugMenu::execIsEnableGame },
			{ "IsLoop", &UYMiniGameAutoPlay_DebugMenu::execIsLoop },
			{ "IsSkipGamePlay", &UYMiniGameAutoPlay_DebugMenu::execIsSkipGamePlay },
			{ "SetEnableAutoPlay", &UYMiniGameAutoPlay_DebugMenu::execSetEnableAutoPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventGetAllWrestlerID_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameAutoPlay_DebugMenu_eventGetAllWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "GetAllWrestlerID", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventGetAllWrestlerID_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventGetTargetWrestlerID_Parms
		{
			int32 _targetId;
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameAutoPlay_DebugMenu_eventGetTargetWrestlerID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameAutoPlay_DebugMenu_eventGetTargetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "GetTargetWrestlerID", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventGetTargetWrestlerID_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventIsEnableAutoPlay_Parms
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
	void Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameAutoPlay_DebugMenu_eventIsEnableAutoPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameAutoPlay_DebugMenu_eventIsEnableAutoPlay_Parms), &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "IsEnableAutoPlay", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventIsEnableAutoPlay_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventIsEnableGame_Parms
		{
			EMiniGameID _id;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__id_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp__id_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YMiniGameAutoPlay_DebugMenu_eventIsEnableGame_Parms, _id), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameAutoPlay_DebugMenu_eventIsEnableGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameAutoPlay_DebugMenu_eventIsEnableGame_Parms), &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp__id_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp__id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "IsEnableGame", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventIsEnableGame_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventIsLoop_Parms
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
	void Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameAutoPlay_DebugMenu_eventIsLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameAutoPlay_DebugMenu_eventIsLoop_Parms), &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "IsLoop", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventIsLoop_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventIsSkipGamePlay_Parms
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
	void Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YMiniGameAutoPlay_DebugMenu_eventIsSkipGamePlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameAutoPlay_DebugMenu_eventIsSkipGamePlay_Parms), &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "IsSkipGamePlay", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventIsSkipGamePlay_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics
	{
		struct YMiniGameAutoPlay_DebugMenu_eventSetEnableAutoPlay_Parms
		{
			bool _EnableAutoPlay;
		};
		static void NewProp__EnableAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__EnableAutoPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::NewProp__EnableAutoPlay_SetBit(void* Obj)
	{
		((YMiniGameAutoPlay_DebugMenu_eventSetEnableAutoPlay_Parms*)Obj)->_EnableAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::NewProp__EnableAutoPlay = { "_EnableAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YMiniGameAutoPlay_DebugMenu_eventSetEnableAutoPlay_Parms), &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::NewProp__EnableAutoPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::NewProp__EnableAutoPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, nullptr, "SetEnableAutoPlay", nullptr, nullptr, sizeof(YMiniGameAutoPlay_DebugMenu_eventSetEnableAutoPlay_Parms), Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_NoRegister()
	{
		return UYMiniGameAutoPlay_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetAllWrestlerID, "GetAllWrestlerID" }, // 2885750888
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_GetTargetWrestlerID, "GetTargetWrestlerID" }, // 3361220469
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableAutoPlay, "IsEnableAutoPlay" }, // 3901817662
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsEnableGame, "IsEnableGame" }, // 841653529
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsLoop, "IsLoop" }, // 1834525481
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_IsSkipGamePlay, "IsSkipGamePlay" }, // 4119769283
		{ &Z_Construct_UFunction_UYMiniGameAutoPlay_DebugMenu_SetEnableAutoPlay, "SetEnableAutoPlay" }, // 4035557650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YMiniGameAutoPlay_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YMiniGameAutoPlay_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYMiniGameAutoPlay_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::ClassParams = {
		&UYMiniGameAutoPlay_DebugMenu::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYMiniGameAutoPlay_DebugMenu, 522874517);
	template<> ABP_200508_API UClass* StaticClass<UYMiniGameAutoPlay_DebugMenu>()
	{
		return UYMiniGameAutoPlay_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYMiniGameAutoPlay_DebugMenu(Z_Construct_UClass_UYMiniGameAutoPlay_DebugMenu, &UYMiniGameAutoPlay_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYMiniGameAutoPlay_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYMiniGameAutoPlay_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
