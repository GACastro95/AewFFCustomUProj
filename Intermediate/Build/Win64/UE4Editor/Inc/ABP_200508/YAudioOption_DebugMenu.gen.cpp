// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YAudioOption_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYAudioOption_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYAudioOption_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYAudioOption_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execIsShowCrowdDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowCrowdDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execIsShowSFXListPlayDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowSFXListPlayDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execIsShowSurfaceDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowSurfaceDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execSetShowCrowdDebug)
	{
		P_GET_UBOOL(Z_Param__crowd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowCrowdDebug(Z_Param__crowd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execSetShowSFXListPlayDebug)
	{
		P_GET_UBOOL(Z_Param__sfxlist);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowSFXListPlayDebug(Z_Param__sfxlist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYAudioOption_DebugMenu::execSetShowSurfaceDebug)
	{
		P_GET_UBOOL(Z_Param__show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowSurfaceDebug(Z_Param__show);
		P_NATIVE_END;
	}
	void UYAudioOption_DebugMenu::StaticRegisterNativesUYAudioOption_DebugMenu()
	{
		UClass* Class = UYAudioOption_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsShowCrowdDebug", &UYAudioOption_DebugMenu::execIsShowCrowdDebug },
			{ "IsShowSFXListPlayDebug", &UYAudioOption_DebugMenu::execIsShowSFXListPlayDebug },
			{ "IsShowSurfaceDebug", &UYAudioOption_DebugMenu::execIsShowSurfaceDebug },
			{ "SetShowCrowdDebug", &UYAudioOption_DebugMenu::execSetShowCrowdDebug },
			{ "SetShowSFXListPlayDebug", &UYAudioOption_DebugMenu::execSetShowSFXListPlayDebug },
			{ "SetShowSurfaceDebug", &UYAudioOption_DebugMenu::execSetShowSurfaceDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventIsShowCrowdDebug_Parms
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
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventIsShowCrowdDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventIsShowCrowdDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "IsShowCrowdDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventIsShowCrowdDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventIsShowSFXListPlayDebug_Parms
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
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventIsShowSFXListPlayDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventIsShowSFXListPlayDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "IsShowSFXListPlayDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventIsShowSFXListPlayDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventIsShowSurfaceDebug_Parms
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
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventIsShowSurfaceDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventIsShowSurfaceDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "IsShowSurfaceDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventIsShowSurfaceDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventSetShowCrowdDebug_Parms
		{
			bool _crowd;
		};
		static void NewProp__crowd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__crowd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::NewProp__crowd_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventSetShowCrowdDebug_Parms*)Obj)->_crowd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::NewProp__crowd = { "_crowd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventSetShowCrowdDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::NewProp__crowd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::NewProp__crowd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "SetShowCrowdDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventSetShowCrowdDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventSetShowSFXListPlayDebug_Parms
		{
			bool _sfxlist;
		};
		static void NewProp__sfxlist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__sfxlist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::NewProp__sfxlist_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventSetShowSFXListPlayDebug_Parms*)Obj)->_sfxlist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::NewProp__sfxlist = { "_sfxlist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventSetShowSFXListPlayDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::NewProp__sfxlist_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::NewProp__sfxlist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "SetShowSFXListPlayDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventSetShowSFXListPlayDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics
	{
		struct YAudioOption_DebugMenu_eventSetShowSurfaceDebug_Parms
		{
			bool _show;
		};
		static void NewProp__show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::NewProp__show_SetBit(void* Obj)
	{
		((YAudioOption_DebugMenu_eventSetShowSurfaceDebug_Parms*)Obj)->_show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::NewProp__show = { "_show", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YAudioOption_DebugMenu_eventSetShowSurfaceDebug_Parms), &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::NewProp__show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::NewProp__show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYAudioOption_DebugMenu, nullptr, "SetShowSurfaceDebug", nullptr, nullptr, sizeof(YAudioOption_DebugMenu_eventSetShowSurfaceDebug_Parms), Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYAudioOption_DebugMenu_NoRegister()
	{
		return UYAudioOption_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYAudioOption_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowCrowdDebug, "IsShowCrowdDebug" }, // 651045738
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSFXListPlayDebug, "IsShowSFXListPlayDebug" }, // 330415622
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_IsShowSurfaceDebug, "IsShowSurfaceDebug" }, // 23018294
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowCrowdDebug, "SetShowCrowdDebug" }, // 132686199
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSFXListPlayDebug, "SetShowSFXListPlayDebug" }, // 1654281998
		{ &Z_Construct_UFunction_UYAudioOption_DebugMenu_SetShowSurfaceDebug, "SetShowSurfaceDebug" }, // 4061036087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YAudioOption_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YAudioOption_DebugMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYAudioOption_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::ClassParams = {
		&UYAudioOption_DebugMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYAudioOption_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYAudioOption_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYAudioOption_DebugMenu, 1067249006);
	template<> ABP_200508_API UClass* StaticClass<UYAudioOption_DebugMenu>()
	{
		return UYAudioOption_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYAudioOption_DebugMenu(Z_Construct_UClass_UYAudioOption_DebugMenu, &UYAudioOption_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYAudioOption_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYAudioOption_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
