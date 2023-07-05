// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameModeMiniGameBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameModeMiniGameBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELGameModeMiniGameBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameModeMiniGameBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
// End Cross Module References
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execCanEnableChangeSplitScreen)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnableChangeSplitScreen(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execDisableSplitScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableSplitScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetFourSplitScreenLayoutGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFourSplitScreenLayoutGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetFourSplitScreenLayoutHorizontal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFourSplitScreenLayoutHorizontal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetFourSplitScreenLayoutVertical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFourSplitScreenLayoutVertical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutFavorBottom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreeSplitScreenLayoutFavorBottom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutFavorTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreeSplitScreenLayoutFavorTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutHorizontal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreeSplitScreenLayoutHorizontal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutVertical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreeSplitScreenLayoutVertical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetTwoSplitScreenLayoutHorizontal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTwoSplitScreenLayoutHorizontal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetTwoSplitScreenLayoutVertical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTwoSplitScreenLayoutVertical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELGameModeMiniGameBase::execSetUpSplitScreenLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpSplitScreenLayout();
		P_NATIVE_END;
	}
	static FName NAME_AELGameModeMiniGameBase_GetMiniGameNameString = FName(TEXT("GetMiniGameNameString"));
	FString AELGameModeMiniGameBase::GetMiniGameNameString(EMiniGameID _id)
	{
		ELGameModeMiniGameBase_eventGetMiniGameNameString_Parms Parms;
		Parms._id=_id;
		ProcessEvent(FindFunctionChecked(NAME_AELGameModeMiniGameBase_GetMiniGameNameString),&Parms);
		return Parms.ReturnValue;
	}
	void AELGameModeMiniGameBase::StaticRegisterNativesAELGameModeMiniGameBase()
	{
		UClass* Class = AELGameModeMiniGameBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEnableChangeSplitScreen", &AELGameModeMiniGameBase::execCanEnableChangeSplitScreen },
			{ "DisableSplitScreen", &AELGameModeMiniGameBase::execDisableSplitScreen },
			{ "SetFourSplitScreenLayoutGrid", &AELGameModeMiniGameBase::execSetFourSplitScreenLayoutGrid },
			{ "SetFourSplitScreenLayoutHorizontal", &AELGameModeMiniGameBase::execSetFourSplitScreenLayoutHorizontal },
			{ "SetFourSplitScreenLayoutVertical", &AELGameModeMiniGameBase::execSetFourSplitScreenLayoutVertical },
			{ "SetThreeSplitScreenLayoutFavorBottom", &AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutFavorBottom },
			{ "SetThreeSplitScreenLayoutFavorTop", &AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutFavorTop },
			{ "SetThreeSplitScreenLayoutHorizontal", &AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutHorizontal },
			{ "SetThreeSplitScreenLayoutVertical", &AELGameModeMiniGameBase::execSetThreeSplitScreenLayoutVertical },
			{ "SetTwoSplitScreenLayoutHorizontal", &AELGameModeMiniGameBase::execSetTwoSplitScreenLayoutHorizontal },
			{ "SetTwoSplitScreenLayoutVertical", &AELGameModeMiniGameBase::execSetTwoSplitScreenLayoutVertical },
			{ "SetUpSplitScreenLayout", &AELGameModeMiniGameBase::execSetUpSplitScreenLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics
	{
		struct ELGameModeMiniGameBase_eventCanEnableChangeSplitScreen_Parms
		{
			UObject* Context;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameModeMiniGameBase_eventCanEnableChangeSplitScreen_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameModeMiniGameBase_eventCanEnableChangeSplitScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameModeMiniGameBase_eventCanEnableChangeSplitScreen_Parms), &Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "CanEnableChangeSplitScreen", nullptr, nullptr, sizeof(ELGameModeMiniGameBase_eventCanEnableChangeSplitScreen_Parms), Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "DisableSplitScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__id_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp__id_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameModeMiniGameBase_eventGetMiniGameNameString_Parms, _id), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameModeMiniGameBase_eventGetMiniGameNameString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp__id_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp__id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "GetMiniGameNameString", nullptr, nullptr, sizeof(ELGameModeMiniGameBase_eventGetMiniGameNameString_Parms), Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetFourSplitScreenLayoutGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetFourSplitScreenLayoutHorizontal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetFourSplitScreenLayoutVertical", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetThreeSplitScreenLayoutFavorBottom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetThreeSplitScreenLayoutFavorTop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetThreeSplitScreenLayoutHorizontal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetThreeSplitScreenLayoutVertical", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetTwoSplitScreenLayoutHorizontal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetTwoSplitScreenLayoutVertical", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameModeMiniGameBase, nullptr, "SetUpSplitScreenLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELGameModeMiniGameBase_NoRegister()
	{
		return AELGameModeMiniGameBase::StaticClass();
	}
	struct Z_Construct_UClass_AELGameModeMiniGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELGameModeMiniGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELGameModeMiniGameBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_CanEnableChangeSplitScreen, "CanEnableChangeSplitScreen" }, // 4280476706
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_DisableSplitScreen, "DisableSplitScreen" }, // 3673743651
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_GetMiniGameNameString, "GetMiniGameNameString" }, // 3297668734
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutGrid, "SetFourSplitScreenLayoutGrid" }, // 909797969
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutHorizontal, "SetFourSplitScreenLayoutHorizontal" }, // 62485175
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetFourSplitScreenLayoutVertical, "SetFourSplitScreenLayoutVertical" }, // 872189934
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorBottom, "SetThreeSplitScreenLayoutFavorBottom" }, // 2837000874
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutFavorTop, "SetThreeSplitScreenLayoutFavorTop" }, // 2780364893
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutHorizontal, "SetThreeSplitScreenLayoutHorizontal" }, // 4181916026
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetThreeSplitScreenLayoutVertical, "SetThreeSplitScreenLayoutVertical" }, // 2825197313
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutHorizontal, "SetTwoSplitScreenLayoutHorizontal" }, // 2951687976
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetTwoSplitScreenLayoutVertical, "SetTwoSplitScreenLayoutVertical" }, // 1868325023
		{ &Z_Construct_UFunction_AELGameModeMiniGameBase_SetUpSplitScreenLayout, "SetUpSplitScreenLayout" }, // 2363793927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameModeMiniGameBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELGameModeMiniGameBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameModeMiniGameBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELGameModeMiniGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELGameModeMiniGameBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELGameModeMiniGameBase_Statics::ClassParams = {
		&AELGameModeMiniGameBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AELGameModeMiniGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameModeMiniGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELGameModeMiniGameBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELGameModeMiniGameBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELGameModeMiniGameBase, 2362476674);
	template<> ABP_200508_API UClass* StaticClass<AELGameModeMiniGameBase>()
	{
		return AELGameModeMiniGameBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELGameModeMiniGameBase(Z_Construct_UClass_AELGameModeMiniGameBase, &AELGameModeMiniGameBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELGameModeMiniGameBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELGameModeMiniGameBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
