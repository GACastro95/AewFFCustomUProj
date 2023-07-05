// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPauseMenuManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPauseMenuManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELPauseMenuManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELPauseMenuManagerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELInGameMenuInputEventActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELPauseMenuBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELPauseMenuManagerBase::execGetTopPauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELPauseMenuBase**)Z_Param__Result=P_THIS->GetTopPauseMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELPauseMenuManagerBase::execSetTopPauseMenu)
	{
		P_GET_OBJECT(UELPauseMenuBase,Z_Param_InPauseMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTopPauseMenu(Z_Param_InPauseMenu);
		P_NATIVE_END;
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_AnyKey = FName(TEXT("MenuInputEvent_AnyKey"));
	void AELPauseMenuManagerBase::MenuInputEvent_AnyKey(EInputEvent KeyEvent)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_AnyKey_Parms Parms;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_AnyKey),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Cancel = FName(TEXT("MenuInputEvent_Cancel"));
	void AELPauseMenuManagerBase::MenuInputEvent_Cancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Cancel),NULL);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed = FName(TEXT("MenuInputEvent_Decision_Pressed"));
	void AELPauseMenuManagerBase::MenuInputEvent_Decision_Pressed(APlayerController* PlayerController)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_Decision_Pressed_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released = FName(TEXT("MenuInputEvent_Decision_Released"));
	void AELPauseMenuManagerBase::MenuInputEvent_Decision_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released),NULL);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Down = FName(TEXT("MenuInputEvent_Down"));
	void AELPauseMenuManagerBase::MenuInputEvent_Down(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_Down_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Down),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft = FName(TEXT("MenuInputEvent_FaceLeft"));
	void AELPauseMenuManagerBase::MenuInputEvent_FaceLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft),NULL);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_FaceUp = FName(TEXT("MenuInputEvent_FaceUp"));
	void AELPauseMenuManagerBase::MenuInputEvent_FaceUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_FaceUp),NULL);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_LB = FName(TEXT("MenuInputEvent_LB"));
	void AELPauseMenuManagerBase::MenuInputEvent_LB(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_LB_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_LB),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Left = FName(TEXT("MenuInputEvent_Left"));
	void AELPauseMenuManagerBase::MenuInputEvent_Left(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_Left_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Left),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_RB = FName(TEXT("MenuInputEvent_RB"));
	void AELPauseMenuManagerBase::MenuInputEvent_RB(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_RB_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_RB),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Right = FName(TEXT("MenuInputEvent_Right"));
	void AELPauseMenuManagerBase::MenuInputEvent_Right(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_Right_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Right),&Parms);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Start = FName(TEXT("MenuInputEvent_Start"));
	void AELPauseMenuManagerBase::MenuInputEvent_Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Start),NULL);
	}
	static FName NAME_AELPauseMenuManagerBase_MenuInputEvent_Up = FName(TEXT("MenuInputEvent_Up"));
	void AELPauseMenuManagerBase::MenuInputEvent_Up(bool Repeat)
	{
		ELPauseMenuManagerBase_eventMenuInputEvent_Up_Parms Parms;
		Parms.Repeat=Repeat ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELPauseMenuManagerBase_MenuInputEvent_Up),&Parms);
	}
	void AELPauseMenuManagerBase::StaticRegisterNativesAELPauseMenuManagerBase()
	{
		UClass* Class = AELPauseMenuManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTopPauseMenu", &AELPauseMenuManagerBase::execGetTopPauseMenu },
			{ "SetTopPauseMenu", &AELPauseMenuManagerBase::execSetTopPauseMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics
	{
		struct ELPauseMenuManagerBase_eventGetTopPauseMenu_Parms
		{
			UELPauseMenuBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuManagerBase_eventGetTopPauseMenu_Parms, ReturnValue), Z_Construct_UClass_UELPauseMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "GetTopPauseMenu", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventGetTopPauseMenu_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuManagerBase_eventMenuInputEvent_AnyKey_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_AnyKey", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_AnyKey_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuManagerBase_eventMenuInputEvent_Decision_Pressed_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Decision_Pressed", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Decision_Pressed_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Decision_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_Down_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Down_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Down", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Down_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_FaceLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_FaceUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_LB_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_LB_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_LB", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_LB_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_Left_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Left_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Left", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Left_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_RB_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_RB_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_RB", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_RB_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_Right_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Right_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Right", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Right_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics
	{
		static void NewProp_Repeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::NewProp_Repeat_SetBit(void* Obj)
	{
		((ELPauseMenuManagerBase_eventMenuInputEvent_Up_Parms*)Obj)->Repeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Up_Parms), &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::NewProp_Repeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::NewProp_Repeat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "MenuInputEvent_Up", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventMenuInputEvent_Up_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics
	{
		struct ELPauseMenuManagerBase_eventSetTopPauseMenu_Parms
		{
			UELPauseMenuBase* InPauseMenu;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPauseMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPauseMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::NewProp_InPauseMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::NewProp_InPauseMenu = { "InPauseMenu", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPauseMenuManagerBase_eventSetTopPauseMenu_Parms, InPauseMenu), Z_Construct_UClass_UELPauseMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::NewProp_InPauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::NewProp_InPauseMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::NewProp_InPauseMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELPauseMenuManagerBase, nullptr, "SetTopPauseMenu", nullptr, nullptr, sizeof(ELPauseMenuManagerBase_eventSetTopPauseMenu_Parms), Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELPauseMenuManagerBase_NoRegister()
	{
		return AELPauseMenuManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELPauseMenuManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELPauseMenuManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELInGameMenuInputEventActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELPauseMenuManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_GetTopPauseMenu, "GetTopPauseMenu" }, // 1280027559
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_AnyKey, "MenuInputEvent_AnyKey" }, // 766104216
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Cancel, "MenuInputEvent_Cancel" }, // 1099726168
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Pressed, "MenuInputEvent_Decision_Pressed" }, // 1678076853
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Decision_Released, "MenuInputEvent_Decision_Released" }, // 290106046
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Down, "MenuInputEvent_Down" }, // 834355348
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceLeft, "MenuInputEvent_FaceLeft" }, // 1036694928
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_FaceUp, "MenuInputEvent_FaceUp" }, // 415407195
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_LB, "MenuInputEvent_LB" }, // 2798793546
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Left, "MenuInputEvent_Left" }, // 2966657187
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_RB, "MenuInputEvent_RB" }, // 3825202607
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Right, "MenuInputEvent_Right" }, // 952532690
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Start, "MenuInputEvent_Start" }, // 3422045437
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_MenuInputEvent_Up, "MenuInputEvent_Up" }, // 2458727445
		{ &Z_Construct_UFunction_AELPauseMenuManagerBase_SetTopPauseMenu, "SetTopPauseMenu" }, // 952227179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELPauseMenuManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPauseMenuManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPauseMenuManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELPauseMenuManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELPauseMenuManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELPauseMenuManagerBase_Statics::ClassParams = {
		&AELPauseMenuManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELPauseMenuManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELPauseMenuManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELPauseMenuManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELPauseMenuManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELPauseMenuManagerBase, 3861224272);
	template<> ABP_200508_API UClass* StaticClass<AELPauseMenuManagerBase>()
	{
		return AELPauseMenuManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELPauseMenuManagerBase(Z_Construct_UClass_AELPauseMenuManagerBase, &AELPauseMenuManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELPauseMenuManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELPauseMenuManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
