// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthProject/StealthProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	STEALTHPROJECT_API UClass* Z_Construct_UClass_AStealthProjectGameMode();
	STEALTHPROJECT_API UClass* Z_Construct_UClass_AStealthProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StealthProject();
// End Cross Module References
	void AStealthProjectGameMode::StaticRegisterNativesAStealthProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStealthProjectGameMode);
	UClass* Z_Construct_UClass_AStealthProjectGameMode_NoRegister()
	{
		return AStealthProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStealthProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStealthProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StealthProjectGameMode.h" },
		{ "ModuleRelativePath", "StealthProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStealthProjectGameMode_Statics::ClassParams = {
		&AStealthProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStealthProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStealthProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AStealthProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AStealthProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStealthProjectGameMode.OuterSingleton, Z_Construct_UClass_AStealthProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStealthProjectGameMode.OuterSingleton;
	}
	template<> STEALTHPROJECT_API UClass* StaticClass<AStealthProjectGameMode>()
	{
		return AStealthProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthProjectGameMode);
	AStealthProjectGameMode::~AStealthProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_StealthProject_Source_StealthProject_StealthProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthProject_Source_StealthProject_StealthProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStealthProjectGameMode, AStealthProjectGameMode::StaticClass, TEXT("AStealthProjectGameMode"), &Z_Registration_Info_UClass_AStealthProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStealthProjectGameMode), 3440487242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StealthProject_Source_StealthProject_StealthProjectGameMode_h_2347760648(TEXT("/Script/StealthProject"),
		Z_CompiledInDeferFile_FID_StealthProject_Source_StealthProject_StealthProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StealthProject_Source_StealthProject_StealthProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
